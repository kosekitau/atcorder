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
using P = pair<ll, ll>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    ll n, w;
    cin>>n>>w;
    ll A[n], B[n];
    for(int i=0;i<n;i++) cin>>A[i]>>B[i];
    
    vector<P> p;
    for(int i=0;i<n;i++) p.push_back({A[i], i});
    sort(p.begin(), p.end(), greater<P>());

    ll ans=0, ttl=0;
    for(int i=0;i<n;i++){
        ll a=p[i].first, idx=p[i].second;
        if(ttl+B[idx]<=w){
            ans+=(a*B[idx]);
            ttl+=B[idx];
        }
        else{
            ans+=a*(w-ttl);
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}