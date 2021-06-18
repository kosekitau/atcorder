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

struct edge{ int to, cost; };
vector <edge> G[110];
int dist[110];
int n, k;


void dijkstra(int s){
    priority_queue <P, vector<P>, greater<P> > que;
    fill(dist, dist+n+1, INF);
    dist[s]=0;
    que.push( P(0, s) );
    while(!que.empty()){
        P p = que.top(); que.pop();
        int v = p.second;
        if(p.first>dist[v]) continue;
        for(int i=0;i<G[v].size();i++){
            edge e = G[v][i];
            if(dist[e.to]>dist[v]+e.cost){
                dist[e.to] = dist[v]+e.cost;
                que.push( P(dist[e.to], e.to) );
            }
        }
    }
}

int main(){
    cin>>n>>k;
    int r[5010];
    for(int i=0;i<k;i++){
        int order, a,b,c,d,e;
        cin>>order;
        if(order){
            cin>>c>>d>>e;
            edge ed; ed.to=d; ed.cost=e;
            G[c].push_back(ed);
            ed.to=c; ed.cost=e;
            G[d].push_back(ed);
        } else {
            cin>>a>>b;
            dijkstra(a);
            if(dist[b]==INF) cout<<-1<<endl;
            else cout<<dist[b]<<endl;
        }
    }
    return 0;
}