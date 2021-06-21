#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int par[1000];//親、iの親はpar[i]である
int depth[1000];//木の深さ

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
        par[x]=find(par[x]);
        return par[x];
    }
}

//xとyの属する要素を併合する
void unite(int x, int y){
    x=find(x);
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

int main(){
    int n, q;
    cin>>n>>q;
    init(n);
    vector<int> r;
    for(int i=0;i<q;i++){
        int com, x, y;
        cin>>com>>x>>y;
        if(com){
            if(same(x, y)) r.push_back(1);
            else r.push_back(0); 
        }
        else {
            unite(x, y);
        }
    }

    for(auto x: r ) cout<<x<<endl;
    return 0;
}