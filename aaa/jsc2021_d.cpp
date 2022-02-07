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
using P = pair<string, string>;
#define INF 2000000003
#define MOD 1000000007
#define MAX_N 1010

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
    ll N, P;
    cin>>N>>P;
    cout<<(P-1) * modsl(P-2, N-1, MOD) % MOD<<endl;
    return 0;
}