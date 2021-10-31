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
#define MAX_N 3001

int main(){
    int m;
    cin>>m;

    vector<int> G[10];
    int u, v;
    for(int i=1;i<=m;i++){
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    int p;
    string s="999999999";
    for(int i=1;i<=8;i++){
        cin>>p;
        s[p-1]=i+'0';
    }
    cout<<s<<endl;

    queue<string> Q;
    Q.push(s);
    map<string, int> mp;
    mp[s]=0;

    while(!Q.empty()){
        string ss=Q.front(); Q.pop();
        for(int i=1;i<=9;i++) if(ss[i-1]=='9') v=i;

        for(auto u : G[v]){
            string t=ss;
            swap(t[u-1], t[v-1]);
            if(mp.count(t)) continue;
            mp[t]=mp[ss]+1;
            Q.push(t);

        }
    }
    if(mp.count("123456789")==0) cout<<-1<<endl;
    else cout<<mp["123456789"]<<endl;

    return 0;
}