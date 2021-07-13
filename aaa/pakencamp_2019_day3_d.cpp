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
    int n;
    cin>>n;
    int cc[4][n];
    for(int i=0;i<4;i++) for(int j=0;j<n;j++) cc[i][j]=5;
    
    for(int i=0;i<5;i++){
        string s;
        cin>>s;
        for(int k=0;k<n;k++){
            if(s[k]=='R') cc[0][k]--;
            else if(s[k]=='B') cc[1][k]--;
            else if(s[k]=='W') cc[2][k]--;
            else cc[3][k]--;
        }
    }

    int dp[4][n];
    fill(dp[0], dp[4], INF);
    for(int i=0;i<3;i++) dp[i][0]=cc[i][0];
    dp[3][0]=INF;
    for(int i=1;i<n;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<4;k++){
                if(j!=k && j!=3 && k!=3) dp[j][i] = min(dp[k][i-1]+cc[j][i], dp[j][i]);
            }
        }
    }

    int r=INF;
    for(int i=0;i<4;i++) r=min(r, dp[i][n-1]);
    cout<<r<<endl;
    return 0;
}