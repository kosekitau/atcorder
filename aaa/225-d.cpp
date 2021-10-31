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
#define MOD 100000
#define MAX_N 90010

struct UnionFind{
    vector<int> par, siz;
    UnionFind(int n) : par(n, -1), siz(n, 1){ }

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
        //if(siz[x]<siz[y]) swap(x, y);
        par[y]=x;
        siz[x]+=siz[y];
        return true;
    }

    void reset(int x, int y){
        par[y]=y;
        siz[x]-=siz[y];
        siz[y]=1;
    }
    void dec(int x){
        siz[x]--;
    }

    int size(int x){
        return siz[root(x)];
    }
};

int main(){
    int n, q;
    cin>>n>>q;
    UnionFind uf(n);

    int lst[n];
    for(int i=0;i<n;i++) lst[i]=i;
    
    for(int i=0;i<q;i++){
        int qu; cin>>qu;
        if(qu==1){
            int x, y;
            cin>>x>>y;
            x--; y--;
            lst[x]=y;
            uf.unite(x, y);
        }
        else if(qu==2){
            int x, y;
            cin>>x>>y;
            x--; y--;
            lst[x]=x;
            uf.reset(x, y);
            cout<<'a'<<endl;
            int nxt=y;
            while(1){
                int idx=lst[nxt];
                if(lst[idx]==idx) break;
                uf.reset(idx, y);
                uf.unite(y, idx);
                nxt=idx;
            }
        }
        else {
            int x;
            cin>>x;
            x--;
            cout<<uf.size(x)<<' ';
            int nxt=uf.root(x);
            cout<<nxt<<' ';
            while(1){
                int idx=lst[nxt];
                cout<<idx+1<<' ';
                if(lst[idx]==idx) break;
                nxt=idx;
            }
            cout<<endl;
        }
    }
    return 0;
}