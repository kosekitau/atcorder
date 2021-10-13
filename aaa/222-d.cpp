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
#define MAX_N 3001


int main(){
    int n;
    cin>>n;
    
    int a[n], b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    
    ll dp[n][MAX_N];
    for(int i=0;i<n;i++) for(int j=0;j<MAX_N;j++) dp[i][j]=0;
    for(int i=a[0];i<=b[0];i++) dp[0][i]=1;
    for(int i=0;i<MAX_N-1;i++) dp[0][i+1]+=dp[0][i];

    for(int i=1;i<n;i++){
        for(int j=a[i];j<=b[i];j++) dp[i][j]=(dp[i][j]+dp[i-1][j])%MOD;
        for(int j=1;j<MAX_N;j++) dp[i][j]=(dp[i][j]+dp[i][j-1])%MOD;
    }
    
    cout<<dp[n-1][b[n-1]]<<endl;;
    return 0;
}