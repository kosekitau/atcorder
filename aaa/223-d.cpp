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
using PQ = priority_queue<int, vector<int>, greater<int>>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    int n, m;
    cin>>n>>m;

    int cnt[n];
    vector<vector<int> >lst(n+1);
    for(int i=0;i<=n;i++) cnt[i]=0;
    for(int i=0;i<m;i++){
        int a, b;
        cin>>a>>b;
        cnt[b]++;
        lst[a].push_back(b);
    }
    
    PQ pq;
    vector<int> ans;
    for(int i=1;i<=n;i++) if(cnt[i]==0) pq.push(i);

    while(!pq.empty()){
        int x=pq.top();
        pq.pop();
        ans.push_back(x);
        for(int i=0;i<lst[x].size();i++){
            int xx=lst[x][i];
            cnt[xx]--;
            if(cnt[xx]==0) pq.push(xx);
        }
    }

    if(ans.size()!=n){
        cout<<-1<<endl;
        return 0;
    }
    for(int i=0;i<ans.size();i++){
        if(i!=0) cout<<' ';
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}