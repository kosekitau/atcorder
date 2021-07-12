#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <tuple>
#include <limits.h>

using namespace std;
using ll = long long;
#define INF 2100000000

int main(){
    int n, m;
    cin>>n>>m;
    ll dp[n][n];
    fill(dp[0], dp[n], INF);
    for(int i=0;i<m;i++){
        int a, b, c;
        cin>>a>>b>>c;
        dp[a-1][b-1]=c;
    }
    for(int i=0;i<n;i++) dp[i][i]=0;

    ll s=0;
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                //if(dp[i][j]==INF) continue;
                dp[i][j]=min(dp[i][j], dp[i][k]+dp[k][j]);
                if(dp[i][j]==INF) s+=0;
                else s+=dp[i][j];
            }
        }
    }
    cout<<s<<endl;
    return 0;
}