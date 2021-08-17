#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <tuple>
using namespace std;
using ll=long long;

int par[100010];//親、iの親はpar[i]である
int depth[100010];//木の深さ

void init(int n){
    for(int i=1;i<=n;i++){
        par[i]=i;
        depth[i]=0;
    }
}

int find(int x){
    if(par[x]==x){
        return x;
    }
    else{
        par[x]=find(par[x]);
        return par[x];
    }
}

void unite(int x, int y){
    x=find(x);
    y=find(y);
    if(x==y) return;
    if(depth[x]<depth[y]){
        par[x]=y;
    }else{
        par[y]=x;
        if(depth[x]==depth[y]) depth[x]++;
    }
}

bool same(int x, int y){
    return find(x)==find(y);
} 

int main(){
    int n;
    cin>>n;
    vector <tuple<int, int, int> > edges;
    for(int i=0;i<n-1;i++){
        int u, w, v;
        cin>>u>>v>>w;
        //u--; v--;
        edges.push_back(make_tuple(w, u, v)); //重みでソート
    }
    sort(edges.begin(), edges.end());

    init(n);
    ll s=0;
    for(int i=0;i<n-1;i++){
        int u, w, v;
        w=get<0>(edges[i]); u=get<1>(edges[i]); v=get<2>(edges[i]);
        s+=1LL*w*(depth[u]+1)*(depth[v]+1);
        unite(u, v);
    }
    cout<<s<<endl;
    return 0;
}