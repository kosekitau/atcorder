//https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_10_C&lang=ja
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <math.h>
using namespace std;
using ll = long long;
int main(){
    int q, dp[1010][1010];
    cin>>q;
    for(int i=0;i<q;i++){
        string x, y;
        cin>>x>>y;
        fill(dp[0], dp[y.size()], 0);
        for(int j=0;j<=x.size();j++){
            for(int k=0;k<=y.size();k++){
                if(x[j]==y[k]){
                    dp[j+1][k+1]=dp[j][k]+1;
                }
                else{
                    dp[j+1][k+1]=max(dp[j+1][k], dp[j][k+1]);
                }
            } 
        }
        cout<<dp[x.size()][y.size()]<<endl;
    }
    return 0;
}