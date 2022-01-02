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
#define MOD 998244353
#define MAX_N 1010

int main(){
    int n, k;
    cin>>n>>k;
    
    int h[n];
    for(int i=0;i<n;i++) cin>>h[i];
    sort(h, h+n);

    int ans=INF;
    for(int i=0;i<n-k+1;i++){
        int d=h[i+k-1]-h[i];
        ans=min(ans, d);
    }
    cout<<ans<<endl;
    return 0;
}