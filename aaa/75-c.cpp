#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int par[10000];//親、iの親はpar[i]である
int depth[10000];//木の深さ

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
    int n, m, a[111], b[111];
    cin>>n>>m;
    for(int i=0;i<m;i++) cin>>a[i]>>b[i];
    
    int s=0;
    for(int i=0;i<m;i++){
        init(n);
        int c=0;
        for(int j=0;j<m;j++) if(i!=j) unite(a[j], b[j]);
        for(int j=1;j<n+1;j++) if(par[j]==j) c++;
        if(c!=1) s++;
    }
    cout<<s<<endl;
    return 0;
}