#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <set>
#include <tuple>
#include <map>

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 10000000

int main(){
    ll n;
    cin>>n;
    ll A[n];
    for(int i=0;i<n;i++) cin>>A[i];
    ll dp[n][10];
    for(int i=0;i<n;i++) for(int j=0;j<10;j++) dp[i][j]=0;

    dp[0][A[0]]=1;
    for(ll i=0;i<n-1;i++){
        for(ll j=0;j<10;j++){
            for(ll k=0;k<10;k++){
                if((A[i+1]+k)%10 == j) dp[i+1][j]=(dp[i+1][j]+dp[i][k])%MOD;
            }
            for(ll k=0;k<10;k++){
                if((A[i+1]*k)%10 == j) dp[i+1][j]=(dp[i+1][j]+dp[i][k])%MOD;
            }
        }
    }
    
    for(int i=0;i<10;i++){
        cout<<dp[n-1][i]<<endl;        
    }
    return 0;
}