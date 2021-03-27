#include <iostream>
#include <cstring>
using namespace std;
int main(){
    long long dp[110][100010];
    int N,W,w[100],v[100];
    cin>>N>>W;
    for(int i=0;i<N;i++) cin>>w[i]>>v[i];
    for(int i=0;i<=N;i++) for(int j=0;j<100001;j++) dp[i][j]=1000000010;

    dp[0][0]=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<=100001;j++){
            if(j>=v[i]) dp[i+1][j]=min(dp[i][j-v[i]]+w[i], dp[i][j]);
            else dp[i+1][j]=dp[i][j];
        }
    }
    int r=100000;
    while(dp[N][r]>W) r--;
    cout<<r<<endl;
    return 0;
}