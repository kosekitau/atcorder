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
    ll n;
    cin>>n;

    ll ans=0;
    for(ll a=1;a*a*a<=n;a++){
        for(ll b=a;b*b<=n;b++){ 
            ll c=n/(b*a);
            if(b>c) break;
            ans+=(c-b)+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}