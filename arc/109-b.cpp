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
using P = pair<int, int>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    ll n;
    cin>>n;
    ll lim=n+1, l=0, r=2e9;
    while(r-l>1){
        ll mid=(l+r)/2;
        if(mid*(mid+1)/2 <= lim) l=mid;
        else r=mid;
    }
    cout<<n-l+1<<endl;
    return 0;
}