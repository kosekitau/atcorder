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

    int ans=INF;
    for(int i=1;i<=n;i++){
        int w=n/i;
        int d=abs(w-i);
        int d2=n-w*i;
        ans=min(ans, d+d2);
    }
    cout<<ans<<endl;
    return 0;
}