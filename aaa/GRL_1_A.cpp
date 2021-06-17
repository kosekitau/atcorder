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

int main(){
    int V, E, r;
    struct edge {int to, cost; };
    cin>>V>>E>>r;
    vector <edge> G[V];
    int d[V];
    for(int i=0;i<E;i++){
        int s,t,d;
        cin>>s>>t>>d;
        edge e; e.to=t; e.cost=d;
        G[s].push_back(e);
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
            if(d[e.to]>d[v]+e.cost){
                d[e.to]=d[v]+e.cost;
                que.push( P(d[e.to], e.to) );
            }
        }
    }

    for(int i=0;i<V;i++){
        if(d[i]==INF) cout<<"INF"<<endl;
        else cout<<d[i]<<endl;
    }
    return 0;
}