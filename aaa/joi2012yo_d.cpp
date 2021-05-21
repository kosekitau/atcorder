//https://atcoder.jp/contests/joi2012yo/tasks/joi2012yo_d
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;

int main(){
    int N, K;
    int A[110], B[110];
    ll dp[3][110];
    fill(dp[0], dp[2], 0);
    cin>>N>>K;
    vector<pair<int, int> > p;
    for(int i=0;i<K;i++){
        int a, b;
        cin>>a>>b;
        p.push_back({a, b});
    }
    
    sort(p.begin(), p.end());
    
    int m=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<3;j++){
            if(i==p[m].first){
                if(p[m].second==j+1){
                    dp[i+1][j]=dp[i][(j+1)%3]+dp[i][(j+2)%3];
                }
                else{
                    dp[i+1][j]=0;
                }
                m++;
            }
            else{
                if(dp[i-1][j]!=0 && dp[i][j]!=0){
                    dp[i+1][j]=0;
                }
                else{
                    dp[i+1][j]=dp[i][(j+1)%3]+dp[i][(j+2)%3];
                }
            }
        }
    }
    ll s=0;
    for(int i=0;i<3;i++) s+=dp[N][i];
    cout<<s<<endl;
    return 0;
}