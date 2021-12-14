#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <set>
#include <tuple>
#include <map>
#include <numeric>

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int par[100010];//親、iの親はpar[i]である
int depth[100010];//木の深さ

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
    //xとyの親を戦わせる
    x=find(x);
    y=find(y);
    if(x==y) return;
    //yの方が根が深い、深い奴の方がえらい
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
    int n, m;
    cin>>n>>m;
    if(m==0){
        cout<<"Yes"<<endl;
        return 0;
    }
    init(n);
    int A[n], B[n];
    bool f=true;
    int lst[100010];
    for(int i=0;i<100010;i++) lst[i]=0;

    for(int i=0;i<m;i++){
        int a, b;
        cin>>a>>b;
        a--; b--;
        if(same(a, b)) f=false;
        unite(a, b);
        A[i]=a; B[i]=b;
        lst[a]++; lst[b]++;
        if(lst[a]>2 || lst[b]>2) f=false;
    }
    
    if(f) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}