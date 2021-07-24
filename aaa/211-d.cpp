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
#define INF 2000000000
#define MOD 1000000007
int main(){
    int V, E, r, M;
    struct edge {int to, cost; };
    cin>>V>>M;
    vector <edge> G[V];
    int d[V];
    ll md[V];
    for(int i=0;i<V+1;i++) md[i]=0;
    for(int i=0;i<M;i++){
        int s,t;
        cin>>s>>t;
        edge e; e.to=t; e.cost=1;
        G[s].push_back(e);
        e.to=s; e.cost=1;
        G[t].push_back(e);
    }

    priority_queue<P, vector<P>, greater<P> > que;
    fill(d, d+V, INF);
    d[r]=0;
    que.push(P(0, r));
    while(!que.empty()){
        P p = que.top();
        que.pop();
        int v = p.second;
        if(d[v]<p.first) continue;
        for(int i=0;i<G[v].size();i++){
            edge e = G[v][i];
            if(d[e.to]==d[v]+e.cost) md[e.to]=(md[e.to]+1)%MOD;
            if(d[e.to]>d[v]+e.cost){
                d[e.to]=d[v]+e.cost;
                que.push( P(d[e.to], e.to) );
            }
        }
    }

    cout<<md[V-1];
    return 0;
}