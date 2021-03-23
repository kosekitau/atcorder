#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int dp[100010];
    int n, k, h[100010];
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>h[i];
    memset(dp, 0, sizeof(dp));

    dp[2]=abs(h[1]-h[0]);
    for(int i=2;i<n;i++){
        dp[i+1]=dp[i]+abs(h[i-1]-h[i]);
        for(int j=2;j<=k;j++){
            if(i-j>=0) dp[i+1]=min(dp[i+1], dp[i-j+1]+abs(h[i-j]-h[i]));
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}