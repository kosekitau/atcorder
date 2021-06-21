#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000000

int main(){
    int n;
    cin>>n;
    int A[310][310];
    int dp[310][310];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
            dp[i][j]=A[i][j];
        }
    }

    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(dp[i][k]+dp[k][j] < dp[i][j]){
                    cout<<-1<<endl;
                    break;
                }
            }
        }
    }
    
    
    return 0;
}