//https://atcoder.jp/contests/joi2011yo/tasks/joi2011yo_d
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <math.h>
using namespace std;
using ll = long long;
int main(){
    int n, N[110];
    ll dp[110][30];
    cin>>n;
    for(int i=0;i<n;i++) cin>>N[i];
    
    memset(dp, 0, sizeof(dp));
    dp[1][N[0]]=1;

    for(int i=1;i<n-1;i++){
        for(int j=0;j<=20;j++){
            dp[i+1][j]=dp[i][j-N[i]] + dp[i][j+N[i]];
        }
    }
    cout<<dp[n-1][N[n-1]]<<endl;
    return 0;
}