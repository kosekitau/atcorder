#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

long long modpow(long long a, long long n, long mod){
    long long res =1;
    while(n > 0){
        if(n & 1) res=res*a%mod;
        a=a*a%mod;
        n>>=1;
    }
    return res;
}

int main(){
    long long n, p, r;
    long long mod=1000000007;
    cin>>n>>p;
    r=p-1;
    cout << (r*modpow(p-2, n-1, mod))%mod << endl;
    return 0;
}