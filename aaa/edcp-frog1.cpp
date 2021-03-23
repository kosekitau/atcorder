#include <iostream>
using namespace std;
int main(){
    int dp[100010];
    int n, h[100010];
    cin>>n;
    for(int i=0;i<n;i++) cin>>h[i];
    memset(dp, 0, sizeof(dp));
    dp[2]=abs(h[1]-h[0]);
    for(int i=2;i<n;i++){
        dp[i+1]=min(abs(h[i]-h[i-1])+dp[i], abs(h[i]-h[i-2])+dp[i-1]);
    }
    cout<<dp[n]<<endl;
    return 0;
}