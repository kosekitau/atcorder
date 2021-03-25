#include <iostream>
#include <cstring>
using namespace std;
int main(){
    long long dp[110][10010];
    int N,W,w[100],v[100];
    cin>>N>>W;
    for(int i=0;i<N;i++) cin>>w[i]>>v[i];
    memset(dp, 0, sizeof(dp));

    for(int i=0;i<N;i++){
        for(int j=0;j<=W;j++){
            if(j>=w[i]) dp[i+1][j]=max(dp[i][j-w[i]]+v[i], dp[i][j]);
            else dp[i+1][j]=dp[i][j];
        }
    }
    cout<<dp[N][W]<<endl;
    return 0;
}