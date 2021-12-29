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
#include <numeric>

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    int h, w;
    cin>>h>>w;
    char C[h][w];
    for(int i=0;i<h;i++) for(int j=0;j<w;j++) cin>>C[i][j];
    int dp[h+1][w+1];
    for(int i=0;i<h;i++) dp[i][w]=0;
    for(int i=0;i<w;i++) dp[h][i]=0;
    for(int i=h-1;i>=0;i--){
        for(int j=w-1;j>=0;j--){
            if(C[i][j]=='#') dp[i][j]=0;
            else dp[i][j]=max(dp[i+1][j], dp[i][j+1])+1;
        }
    }

    cout<<dp[0][0]<<endl;
    return 0;
}