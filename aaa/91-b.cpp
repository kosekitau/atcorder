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
using P = pair<string, string>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    int n;
    cin>>n;
    
    map<string, int> mp;
    for(int i=0;i<n;i++){
        string s; cin>>s;
        mp[s]++;
    }
    int m; cin>>m;
    for(int i=0;i<m;i++){
        string s; cin>>s;
        mp[s]--;
    }

    int ans=0;
    auto idx=mp.begin();
    for(int i=0;i<mp.size();i++){
        ans=max(ans, idx->second);
        idx++;
    }
    cout<<max(0, ans)<<endl;
    return 0;
}