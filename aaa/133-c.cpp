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
using P = pair<string, string>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    int l, r;
    cin>>l>>r;
    if(r-l>=2019){
        cout<<0<<endl;
        return 0;
    }
    ll ans=INF;
    for(ll i=l;i<=r;i++) {
        for(ll j=i+1;j<=r;j++){
            ans=min(ans, i*j%2019);
        }
    }
    cout<<ans<<endl;
    return 0;
}