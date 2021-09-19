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
#define NUM 610

int main(){
    int n, x, y;
    cin>>n;
    cin>>x>>y;
    ll A[n], B[n];
    for(int i=0;i<n;i++) cin>>A[i]>>B[i];

    ll dp[n+1][NUM][NUM];
    for(int i=0;i<=n;i++) for(int j=0;j<NUM;j++) for(int k=0;k<NUM;k++) dp[i][j][k]=INF;
    dp[0][0][0]=0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<NUM;j++){
            for(int k=0;k<NUM;k++){
                if(A[i]<=j && B[i]<=k) dp[i+1][j][k] = min(dp[i][j-A[i]][k-B[i]]+1, dp[i][j][k]);
                else dp[i+1][j][k] = dp[i][j][k];
            }
        }
    }
    
    ll ans=INF;
    for(int i=x;i<NUM;i++){
        for(int j=y;j<NUM;j++){
            ans=min(ans, dp[n][i][j]);
        }
    }
    if(ans>300) cout<<-1<<endl;
    else cout<<ans<<endl;
    
    return 0;
}