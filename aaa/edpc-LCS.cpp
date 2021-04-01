#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int dp[3030][3030];
    string s, t;
    cin>>s>>t;
    
    memset(dp, 0, sizeof(dp));
    for(int i=0;i<s.size();i++){
        for(int j=0;j<t.size();j++){
            if(s[i]==t[j]) dp[i+1][j+1] = dp[i][j]+1;
            else dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
        }
    }
    string result;
    
    int i=s.size(), j=t.size(), len=dp[s.size()][t.size()];
    while(len>0){
        if(s[i-1]==t[j-1]){
            i--;
            j--;
            len--;
            result+=s[i];
        }
        else if(dp[i][j]==dp[i-1][j]) i--;
        else j--;
    }
    reverse(result.begin(), result.end());
    cout<<result<<endl;
    return 0;
}