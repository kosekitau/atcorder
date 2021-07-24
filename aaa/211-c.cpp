#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <tuple>
#include<cmath>
#include<iomanip>
#include <map>

using namespace std;
using ll = long long;
typedef pair<int, int> P;
#define INF 2100000000
#define MOD 1000000007


int main(){
    string s;
    cin>>s;
    map<char, int> l;
    string smp="chokudai";
    for(int i=0;i<smp.length();i++) l[smp[i]]=i;
    
    ll dp[100010][8];
    for(int i=s.length();i>-1;i--) for(int j=0;j<8;j++) dp[i][j]=0;

    for(int i=s.length()-1;i>-1;i--){
        for(int j=0;j<8;j++) dp[i][j]=dp[i+1][j]; 
        if(s[i]=='i') dp[i][7]=(dp[i][7]+1)%MOD;
        else if(l.count(s[i])==1)
            dp[i][l[s[i]]] = (dp[i+1][l[s[i]]+1]+dp[i+1][l[s[i]]])%MOD;
    }

    cout<<dp[0][0]<<endl;
    return 0;
}