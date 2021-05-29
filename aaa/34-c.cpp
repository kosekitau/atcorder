#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
#define INF 100010
#define MOD 1000000007

ll modsl(ll a, ll n, ll mod){
    ll res=1;
    while(n>0){
        if(n & 1) res = res*a%mod;
        a = a*a%mod;
        n>>=1; 
    }
    return res;
}

int main(){
    int w, h;  
    cin>>w>>h;
    ll s=1, a, b;
    for(int i=1;i<=(w+h)-2;i++){
        s=(s*i)%1000000007;
        if(i==w-1) a=s;
        if(i==h-1) b=s; 
    }
    cout<<s * modsl(a, MOD-2, MOD)%MOD * modsl(b, MOD-2, MOD)%MOD<<endl;
    return 0;
}