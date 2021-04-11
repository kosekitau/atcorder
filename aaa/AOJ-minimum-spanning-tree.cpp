#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
#define MAX_N 1000000

int par[MAX_N];//親、iの親はpar[i]である
int depth[MAX_N];//木の深さ

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

struct edge{int u, v, cost;};

bool comp(const edge& e1, const edge& e2){
    return e1.cost < e2.cost;
}

edge es[MAX_N];
int V, E;//頂点と辺の数

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
    cin>>V>>E;
    for(int i=0;i<E;i++)
        cin>>es[i].u>>es[i].v>>es[i].cost;
    
    cout<<kruskal()<<endl;
    return 0;
}