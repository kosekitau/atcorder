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
    ll T[n];
    for(int i=0;i<n;i++) cin>>T[i];
    
    ll ans=1;
    for(int i=0;i<n;i++) ans=lcm(T[i], ans);
    cout<<ans<<endl;
    return 0;
}