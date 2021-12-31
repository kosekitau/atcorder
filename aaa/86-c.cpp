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
    int n;
    cin>>n;
    int t[n+1], x[n+1], y[n+1];
    t[0]=0; x[0]=0; y[0]=0;
    for(int i=1;i<=n;i++){
        int T, X, Y;
        cin>>T>>X>>Y;
        t[i]=T; x[i]=X; y[i]=Y;
    }

    bool ans=true;
    for(int i=1;i<=n;i++){
        int td=t[i]-t[i-1];
        int d=abs(x[i]-x[i-1]) + abs(y[i]-y[i-1]);
        if(td<d || td%2!=d%2) ans=false;
    }
    if(ans)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}