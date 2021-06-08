#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
#define N 810 
#define MAX_A 1000000000
#define MOD 1000000007

ll mod(ll a, ll n){
    ll s=1;
    while(n>0){
        if(n&1) s=s*a%MOD;
        a=a*a%MOD;
        n>>=1;
    }
    return s;
}

int main(){
    int x, y;
    ll s=1;
    cin>>x>>y;

    ll AA=1,BB=1;
    for(int a=0;a<=x;a++){
        int b=x-a;
        if(b%2) continue;
        b=b/2;
        if(2*a+b == y){
            for(int i=1;i<=a+b;i++){
                s=s*i%MOD;
                if(i==a) AA=s;
                if(i==b) BB=s;
            }
            cout<<s*mod(AA, MOD-2)%MOD*mod(BB, MOD-2)%MOD<<endl;
            return 0;
        }
    }
    cout<<0<<endl;
    return 0;
}