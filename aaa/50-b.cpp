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
using P = pair<string, string>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    int n;
    cin>>n;
    int T[n+1];
    ll sm=0;
    for(int i=1;i<=n;i++) {
        cin>>T[i];
        sm+=T[i];
    }
    int m;
    cin>>m;
    int P[m], X[m];
    for(int i=0;i<m;i++) cin>>P[i]>>X[i];
    
    for(int i=0;i<m;i++){
        cout<<sm - T[P[i]] + X[i]<<endl;
    }
    return 0;
}