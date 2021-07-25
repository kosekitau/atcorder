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
#define INF 2000000001
#define MOD 1000000007
int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int> > G(n, vector<int>(0));
    for(int i=0;i<m;i++){
        int a, b; cin>>a>>b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    int dist[n];
    for(int i=0;i<n;i++) dist[i]=INF;
    dist[0]=0;
    int cnt[n];
    for(int i=0;i<n;i++) cnt[i]=0;
    cnt[0]=1;
    queue<int> que;
    que.push(0);

    while(!que.empty()){
        int v=que.front();
        que.pop();
        for(int vv: G[v]){
            if(dist[vv]==INF){
                dist[vv]=dist[v]+1;
                que.push(vv);
                cnt[vv]=cnt[v];
            }
            else if(dist[vv]==dist[v]+1){
                cnt[vv]=(cnt[vv]+cnt[v])%MOD;
            }
        }
    }
    cout<<cnt[n-1]<<endl;
    return 0;
}