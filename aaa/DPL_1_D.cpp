#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 1000000000

int main(){
    int n;
    cin>>n;
    int a[n], dp[n];
    for(int i=0;i<n;i++) cin>>a[i];
    fill(dp, dp+n, INF);
    
    for(int i=0;i<n;i++){
        int idx;
        idx = lower_bound(dp, dp+n, a[i]) - dp;
        dp[idx] = a[i]; 
    }
    cout<<lower_bound(dp, dp+n, INF)-dp<<endl;
    return 0;
}