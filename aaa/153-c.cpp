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
    int n, k;
    cin>>n>>k;
    int H[n];
    for(int i=0;i<n;i++) cin>>H[i];   
    sort(H, H+n, greater<int>());
    ll ans=0;
    for(int i=k;i<n;i++) ans+=H[i];
    cout<<ans<<endl;

    return 0;
}