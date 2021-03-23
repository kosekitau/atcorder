#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int dp[100010][3];
    int n, a[100010], b[100010], c[100010];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i]>>b[i]>>c[i];
    memset(dp, 0, sizeof(dp));

    for(int i=0;i<n;i++){
        dp[i+1][0]=max(dp[i][1], dp[i][2])+a[i];
        dp[i+1][1]=max(dp[i][0], dp[i][2])+b[i];
        dp[i+1][2]=max(dp[i][0], dp[i][1])+c[i];
    }
    cout<<max(dp[n][2], max(dp[n][0], dp[n][1]))<<endl;
    return 0;
}