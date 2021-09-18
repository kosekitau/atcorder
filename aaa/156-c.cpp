#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <set>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 1000000007

int main(){
    int n;
    cin>>n;
    ll X[n], mi=(1LL<<60), mx=0;
    for(int i=0;i<n;i++){ 
        cin>>X[i];
        mi=min(mi, X[i]);
        mx=max(mx, X[i]);
    }


    ll ans = (1LL<<60);
    for(ll i=mi;i<=mx;i++){
        ll s=0;
        for(ll j=0;j<n;j++) s+=(X[j]-i)*(X[j]-i);
        ans = min(ans, s);
    }
    cout<<ans<<endl;
    return 0;
}