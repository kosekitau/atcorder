
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector> 
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    int INF = 2100000000;
    long long dp[330][330];
    fill(dp[0], dp[N], INF);

    for(int i=0;i<M;i++){
        int a,b,t;
        cin>>a>>b>>t;
        a--; b--;
        dp[a][b]=t; dp[b][a]=t;
    }
    for(int i=0;i<N;i++) dp[i][i]=0;

    for(int k=0;k<N;k++){
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                dp[i][j]=min(dp[i][j], dp[i][k]+dp[k][j]);
            }
        }
    }

    long long r=2100000000;
    for(int i=0;i<N;i++){
        long long i_max=0;
        for(int j=0;j<N;j++){
            i_max=max(i_max, dp[i][j]);
        }
        r=min(r, i_max);
    }
    cout<<r<<endl;
    return 0;
}