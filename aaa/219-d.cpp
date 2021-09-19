#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <set>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 1000000007

int main(){
    ll n, x, y;
    cin>>n;
    cin>>x>>y;
    ll A[n], B[n];
    for(int i=0;i<n;i++) cin>>A[i]>>B[i];

    ll dp[n+1][x+1][y+1];
    for(int i=0;i<=n;i++) for(int j=0;j<=x;j++) for(int k=0;k<=y;k++) dp[i][j][k]=INF;
    dp[0][0][0]=0;
    
    for(ll i=0;i<n;i++){
        for(ll j=0;j<=x;j++){
            for(ll k=0;k<=y;k++){
                dp[i+1][min(x, j+A[i])][min(y, k+B[i])] = min(dp[i+1][min(x, j+A[i])][min(y, k+B[i])], dp[i][j][k]+1);
                dp[i+1][j][k] = min(dp[i+1][j][k], dp[i][j][k]);
            }
        }
    }
    
    if(dp[n][x][y]==INF) cout<<-1<<endl;
    else cout<<dp[n][x][y]<<endl;
    
    return 0;
}