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

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 10000000

int main(){
    ll n, d;
    cin>>n>>d;
    ll lst[n+1];
    lst[1]=1;
    for(int i=2;i<=n;i++) lst[i]=lst[i-1]*2%MOD;
    ll ans=0;
    for(int i=1;i<=n;i++){
        if(n-i>=d){
            ans=(ans+lst[d])%MOD;
        }
    }
    return 0;
}