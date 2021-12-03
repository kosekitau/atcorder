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
    ll n, m;
    cin>>n>>m;
    vector<P> p;
    for(int i=0;i<n;i++){
        ll a, b;
        cin>>a>>b;
        p.push_back({a, b});
    }
    sort(p.begin(), p.end());

    ll cnt=0, ans=0;
    for(int i=0;i<n;i++){
        ll a=p[i].first, b=p[i].second;
        if(cnt+b<=m) {
            cnt+=b;
            ans+=a*b;
        }
        else{
            ans+=(m-cnt)*a;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}