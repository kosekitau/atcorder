#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <tuple>
using namespace std;
using ll = long long;
#define MAX_N 10000000

struct edge{int u, v, cost;};

int par[MAX_N];//親、iの親はpar[i]である
int depth[MAX_N];//木の深さ
edge es[MAX_N];
int V, E;//頂点と辺の数

//n要素で初期化
void init(int n){
    for(int i=0;i<n;i++){
        //各数字を親にする、深さはそれぞれ0
        par[i]=i;
        depth[i]=0;
    }
}

//木の根を求める
int find(int x){
    if(par[x]==x){
        return x;//xは親である
    }
    else{
        //辿ったノード全てを親に春
        return par[x]=find(par[x]);
    }
}

//xとyの属する要素を併合する
void unite(int x, int y){
    x=find(x);//それぞれの親を見つける
    y=find(y);
    if(x==y) return;
    //yの方が根が深い
    if(depth[x]<depth[y]){
        //xの親はyになる
        par[x]=y;
    }else{
        par[y]=x;
        if(depth[x]==depth[y]) depth[x]++;
    }
}

//xとyが同じ集合か
bool same(int x, int y){
    return find(x)==find(y);
}


bool comp(const edge& e1, const edge& e2){
    return e1.cost < e2.cost;
}

int kruskal(){
    sort(es, es+E, comp);//edge.costが小さい順にソート
    init(V);
    int res = 0;
    for(int i=0;i<E;i++){
        edge e = es[i];
        //点eと点uが同じ親を持たない
        if(!same(e.u, e.v)){
            unite(e.u, e.v);
            res+=e.cost;
        }
    }
    return res;
}

int main(){
    int n;
    vector <pair<int, int> > va, vb;
    cin>>n;
    for(int i=0;i<n;i++){
        int x, y;
        cin>>x>>y;
        va.push_back(make_pair(x, i));
        vb.push_back(make_pair(y, i));
    }
    sort(va.begin(), va.end());
    sort(vb.begin(), vb.end());
    
    vector<tuple<int, int, int> > e;
    for(int i=0;i<n-1;i++){
        e.push_back(make_tuple(va[i+1].first-va[i].first, va[i].second, va[i+1].second));
        e.push_back(make_tuple(vb[i+1].first-vb[i].first, vb[i].second, vb[i+1].second));
    }
    sort(e.begin(), e.end());

    init(n);
    ll res = 0;
    for(auto p: e){
        int cost=get<0>(p);
        int u=get<1>(p);
        int v=get<2>(p);
        if(!same(u, v)){
            unite(u, v);
            res+=cost;
        }
    }
    cout<<res<<endl;
    return 0;
}