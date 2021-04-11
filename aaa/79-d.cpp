#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
    int H, W;
    int dp[20][20];
    int A[220][220];

    cin>>H>>W;
    for(int i=0;i<10;i++) for(int j=0;j<10;j++) cin >> dp[i][j];        
    for(int i=0;i<H;i++) for(int j=0;j<W;j++) cin >> A[i][j];
    
    for(int k=0;k<10;k++){
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                dp[i][j]=min(dp[i][j], dp[i][k]+dp[k][j]);
            }
        }
    }

    int s=0;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(A[i][j]==-1) continue;
            s+=dp[A[i][j]][1];
        }
    }
    cout<<s<<endl;
    return 0;
}