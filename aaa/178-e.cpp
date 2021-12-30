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
using Graph = vector<vector<ll> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    int n;
    cin>>n;
    ll zmax=-INF, zmin=INF, wmax=-INF, wmin=INF;
    for(int i=0;i<n;i++){
        ll w, x, y, z; cin>>x>>y;
        z=x+y; w=x-y;
        zmax=max(zmax, z);
        zmin=min(zmin, z);
        wmax=max(wmax, w);
        wmin=min(wmin, w);
    }
    cout<<max(zmax-zmin, wmax-wmin)<<endl;
    return 0;
}