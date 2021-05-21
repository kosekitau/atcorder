//https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B&lang=ja
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;

ll modpow(ll a, ll n, ll mod){
    ll res=1;
    while(n>0){
        if(n&1) res=a*res%mod;
        a=a*a%mod;
        n=n>>1;
    }
    return res;
}

int main(){
    int a, n;
    cin>>a>>n;
    cout<<modpow(a, n, 1000000007)<<endl;
    return 0;
}