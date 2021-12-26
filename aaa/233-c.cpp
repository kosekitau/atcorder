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
    ll n, x;
    cin>>n>>x;
    
    ll L[n];
    ll a[n][100010];
    for(ll i=0;i<n;i++){
        cin>>L[i];
        for(ll j=0;j<L[i];j++){
            ll aa; cin>>aa;
            a[i][j]=aa;
        }
    }

    queue<ll> que;
    for(ll i=0;i<L[0];i++) que.push(a[0][i]);
    ll lm=L[0];
    for(ll i=1;i<n;i++){
        for(ll j=0;j<lm;j++){
            ll pre=que.front();
            que.pop();
            for(ll k=0;k<L[i];k++){
                que.push(a[i][k]*pre);
            }
        }
        lm=lm*L[i];
    }
    
    ll ans=0;
    while(!que.empty()) {
        ll z=que.front(); que.pop();
        if(z==x) ans++;
    }
    cout<<ans<<endl;

    return 0;
}