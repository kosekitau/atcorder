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

ll modpow(ll a, ll n, ll mod){
    ll res=1;
    while(n>0){
        if(n&1) res=a*res%mod;
        a=a*a%mod;
        n=n>>1;
    }
    return res;
}

ll cnt(ll n, ll a){
    ll nn=1, aa=1;
    for(int i=1;i<=a;i++) nn=nn*(n-i+1)%MOD;
    for(int i=1;i<=a;i++) aa=a*i%MOD;
    return nn*modpow(aa, MOD-2, MOD);
}

int main(){
    ll n, a, b;
    cin>>n>>a>>b;
    ll sum=modpow(2, n, MOD);
    sum=(sum-1)%MOD; 
    cout<<cnt(n, a)<<endl;
    cout<<cnt(n, b)<<endl;
    cout<<sum<<endl;
    
    cout<<(sum-cnt(n, a)-cnt(n, b))%MOD<<endl;
    
    return 0;
}