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
    ll n, k;
    cin>>n>>k;
    ll A[n];
    for(int i=0;i<n;i++) cin>>A[i];
    
    ll sA[n];
    sA[0]=A[0];
    ll ans=0;
    if(sA[0]==k) ans++;
    map<ll, int> mp;
    mp[sA[0]]++; mp[0]++;
    for(int i=1;i<n;i++){
        sA[i]=sA[i-1]+A[i];
        ans+=mp[sA[i]-k];
        mp[sA[i]]++;
    }
    cout<<ans<<endl;
    return 0;
}