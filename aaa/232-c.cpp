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

int main(){
    int n, m;
    cin>>n>>m;
    
    int A[m], B[m], C[m], D[m];
    Graph g;
    g.resize(n);
    for(int i=0;i<m;i++) {
        cin>>A[i]>>B[i];
        A[i]--; B[i]--;
    }
    for(int i=0;i<m;i++) {
        cin>>C[i]>>D[i];
        C[i]--; D[i]--;
        g[C[i]].push_back(D[i]);
        g[D[i]].push_back(C[i]);
    }    
    int P[n];
    for(int i=0;i<n;i++) P[i]=i;

    bool ans=false;
    do{
        bool f=true;
        for(int i=0;i<m;i++){
                int lx=P[A[i]], rx=P[B[i]];
                bool ff=false;
                for(auto x: g[lx]) if(x==rx) ff=true;
                if(!ff) f=false;
        }
        if(f) ans=true;
    }while(next_permutation(P, P+n));
    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}