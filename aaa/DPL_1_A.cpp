//https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_C&lang=ja
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <math.h>
#define INF 100000000
using namespace std;
using ll = long long;

int main(){
    int n, m;
    int dp[50010];
    int c[22];
    cin>>n>>m;
    for(int i=0;i<m;i++) cin>>c[i];
    
    for(int i=0;i<=n;i++) dp[i]=INF;
    dp[0]=0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<m;j++){
            if(i+c[j]<=n)
                dp[i+c[j]] = min(dp[i+c[j]], dp[i]+1);        
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}