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

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 1000000007
#define MAX_N 10000000

struct UnionFind{
    vector<int> par, siz;
    UnionFind(int n) : par(n, -1), siz(n, 1){  }

    int root(int x){
        if(par[x]==-1) return x;
        else return par[x] = root(par[x]);
    }

    bool issame(int x, int y){
        return root(x) == root(y);
    }

    bool unite(int x, int y){
        x=root(x); y=root(y);
        if(x==y) return false;
        if(siz[x]<siz[y]) swap(x, y);
        par[y]=x;
        siz[x]+=siz[y];
        return true;
    }

    int size(int x){
        return siz[root(x)];
    }
};

int main(){
    int n, m, k;
    cin>>n>>m>>k;
    int A[m], B[m], C[k], D[k];
    int ans[n];
    set<int> friends[n];

    for(int i=0;i<m;i++) {
        cin>>A[i]>>B[i];
        A[i]--; B[i]--;
    }
    for(int i=0;i<k;i++) {
        cin>>C[i]>>D[i];
        C[i]--; D[i]--;
    }

    UnionFind uf(n);
    for(int i=0;i<m;i++) uf.unite(A[i], B[i]);

    for(int i=0;i<n;i++) ans[i]=uf.size(i)-1;

    for(int i=0;i<m;i++){
        ans[A[i]]--;
        ans[B[i]]--;
        friends[A[i]].insert(B[i]);
        friends[B[i]].insert(A[i]);        
    }

    for(int i=0;i<k;i++){
        if(!friends[C[i]].count(D[i]) && uf[C[i]]==uf[D[i]]){
            ans[C[i]]--;
            ans[D[i]]--;
        }
    }

    for(int i=0;i<n;i++) cout<<ans[i]<<endl;

    return 0;
}