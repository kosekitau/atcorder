#include <iostream>
#include <cstring>
#include <algorithm>
#include <functional>
#include <stack>
#include <queue>
#include <map>
#include <set>
using namespace std;

const int INF = 1<<29; 

int main(){
    string S, T;
    
    int dp[1010][1010];
    cin>>S>>T;
    memset(dp, 0, sizeof(dp));

    for(int i=0;i<S.size();i++){
        for(int j=0;j<T.size();j++){
            if(S[i]==T[j]) dp[i+1][j+1]=dp[i][j]+1;
            else dp[i+1][j+1]=max(dp[i+1][j], dp[i][j+1]);
        }
    }
    cout<<dp[S.size()][T.size()]<<endl;
    return 0;
}