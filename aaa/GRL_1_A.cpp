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
#define INF 1000000000

int main(){
    int V, E, r;
    struct edge {int to, cost; };
    vector <edge> G[V];
    int d[V];
    for(int i=0;i<E;i++){
        int s,t,d;
        cin>>s>>t>>d;
        G[s].push_back({t, d});
    }

    priority_queue<P, vector<P>, greater<P> > que;
    d[r]=0;
    que.push(P(0, r));

    while(!que.empty()){
        P p = que.top();
        que.pop();
        int v = p.second;
        if(d[v]<p.first) continue;
        
    }
    return 0;
}