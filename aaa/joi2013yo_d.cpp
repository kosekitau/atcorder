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
    int d,n,T[220], C[220];
    cin>>d>>n;
    vector <pair<int, int> > AB;
    for(int i=1;i<=d;i++) cin>>T[i];
    for(int i=0;i<n;i++){
        int a, b;
        cin>>a>>b>>C[i];
        AB.push_back(make_pair(a,b));
    }
    
    int dp[220][220];
    fill(dp[0], dp[d], 0);
    for(int i=0;i<n;i++)
        if(AB[i].first>T[1] || T[1]>AB[i].second) dp[1][i]=-1;
    
    for(int i=1;i<d;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(AB[j].first<=T[i+1] && T[i+1]<=AB[j].second && dp[i][k]!=-1){
                    dp[i+1][j] = max(dp[i+1][j], dp[i][k]+abs(C[j]-C[k]));
                }
            }
        }
    }

    int s=0;
    for(int i=0;i<n;i++)s=max(s, dp[d][i]);
    cout<<s<<endl;
    return 0;
}