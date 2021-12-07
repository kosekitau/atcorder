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
using P = pair<string, string>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    int n;
    cin>>n;
    int S[n][26];
    for(int i=0;i<n;i++) for(int j=0;j<26;j++) S[i][j]=0;

    for(int i=0;i<n;i++){
        string s; cin>>s;
        for(int j=0;j<s.size();j++){
            S[i][s[j]-'a']++;
        }
    }
    string ans="";
    for(int i=0;i<26;i++){
        int r=INF;
        for(int j=0;j<n;j++) r=min(r, S[j][i]);
        for(int j=0;j<r;j++) ans+='a'+i;
    }
    cout<<ans<<endl;
    return 0;
}