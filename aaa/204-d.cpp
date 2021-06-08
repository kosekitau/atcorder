#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
#define MAX_A 1010

int main(){
    int n, T[110], s=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>T[i];
        s+=T[i];
    }

    bool dp[110][1000010];
    for(int i=0;i<n+1;i++) for(int j=0;j<s+1;j++) dp[i][j]=false;
    dp[0][0]=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<s+1;j++){
            if(T[i] <= j) dp[i+1][j]=dp[i][j-T[i]] || dp[i][j];
            else dp[i+1][j]=dp[i][j];
        }
    }

    int stt;
    if(s%2) stt=s/2+1;
    else stt=s/2;
    for(int i=stt;i<s+1;i++){
        if(dp[n][i]){
            cout<<i<<endl;
            break;    
        }
    }
    return 0;
}