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
using Graph = vector<vector<ll> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    string s, t;
    cin>>s;
    cin>>t;
    
    int S[s.size()], T[t.size()];
    for(int i=1;i<s.size();i++) S[i]=((s[i]-s[i-1])+26)%26;
    for(int i=1;i<t.size();i++) T[i]=((t[i]-t[i-1])+26)%26;

    bool ans=true;
    for(int i=1;i<s.size();i++) {
        if(S[i]!=T[i]) ans=false;
    }
    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}