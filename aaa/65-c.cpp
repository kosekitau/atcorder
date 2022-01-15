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

int main(){
    int n,m;
    cin>>n>>m;
    if(abs(n-m)>1){
        cout<<0<<endl;
        return 0;
    }
    ll ans=1;
    for(ll i=1;i<=n;i++) ans=(ans*i)%MOD;
    for(ll i=1;i<=m;i++) ans=(ans*i)%MOD;
    if((m+n)%2==0) ans=(ans*2)%MOD;
    cout<<ans<<endl;
    return 0;
}