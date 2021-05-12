//https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_C&lang=ja
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <math.h>
using namespace std;
using ll = long long;
int main(){
    int N, W;
    int dp[110][10010];
    int v[110], w[110];
    cin>>N>>W;
    for(int i=0;i<N;i++) cin>>v[i]>>w[i];

    for(int i=0;i<W;i++) dp[0][i]=0;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<=W;j++){
            if(j>=w[i]) dp[i+1][j]=max(dp[i][j], dp[i+1][j-w[i]]+v[i]);
            else dp[i+1][j]=dp[i][j];
        }
    }
    cout<<dp[N][W]<<endl;
    return 0;
}