#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <tuple>
#include <limits.h>

using namespace std;
using ll = long long;
typedef pair<int, int> P;
#define INF 2100000000
#define MOD 1000000007

ll modll(ll a, ll n, ll mod){
    ll res=1;
    while(n>0){
        if(n&1) res=res*a%mod;
        a=a*a%mod;
        n>>=1;
    }
    return res;
}

int main(){
    ll n, k, l, r;
    cin>>n>>k;
    l=n-1+k;
    r=n-1;

    ll s=1, r2;
    for(ll i=1;i<=l;i++){
        s=s*i%MOD;
        if(i==r) r2=s;
    }
    cout<<s*modll(r2, MOD-2, MOD)%MOD<<endl;
    return 0;
}