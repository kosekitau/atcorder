#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <map>
#include <set>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000000
#define MOD 1000000007

int n;
vector< priority_queue<int, vector<int>, greater<int>> > ab;
vector<bool> m;

void dfs(int s){
    if(ab[s].empty()) return;
    if(s==1) cout<<s;
    else cout<<' '<<s;
    while(!ab[s].empty()){
        int nx=ab[s].top();
        ab[s].pop();
        if(m[nx]){
            m[nx]=false;
            dfs(nx);
            cout<<' '<<s;
        }
    }
    return;
}

int main(void){
    cin>>n;
    ab.resize(n+1);
    m.resize(n+1);
    for(int i=1;i<n+1;i++) m[i]=true;
    for(int i=0;i<n-1;i++){
        int a, b; cin>>a>>b;
        ab[a].push(b);
        ab[b].push(a);
    }
    m[1]=false;
    dfs(1);
    cout<<endl;
    return 0;
}