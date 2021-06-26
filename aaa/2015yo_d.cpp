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
#define INF 1000000000

int main(){
    int n, m;
    cin>>n>>m;
    int C[1010], D[1010], dp[1010][1010];
    for(int i=0;i<n;i++) cin>>D[i];
    for(int i=0;i<m;i++) cin>>C[i];

    for(int i=0;i<m;i++) for(int j=0;j<n;j++) dp[i][j]=INF;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            dp[i+1][j] = min(dp[i][j], dp[i][j-1]+C[i]*D[j]);
        }
    }

    cout<<dp[m][n-1]<<endl;
    return 0;
}