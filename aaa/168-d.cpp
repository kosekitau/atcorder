#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
#include <functional>
#include <vector>
using namespace std;

struct edge{ int to, cost; };
typedef pair<int, int> P;//最短距離と、頂点の番号

int V;
vector<edge> G[50];
int d[50];//各点の最短距離を記録する
int INF = 100000000;

//始点sから各頂点への最短距離を求める
void dijkstra(int s){
    priority_queue<P, vector<P>, greater<P> > que;
    fill(d, d+V, INF);//とりあえず全点の最短距離をINFに
    d[s]=0;//0は0に
    que.push(P(0, s));

    while(!que.empty()){
        P p = que.top(); que.pop();
        int v = p.second;//頂点の番号を取り出す
        if(d[v] < p.first) continue;
        for(int i=0;i<G[v].size();i++){
            edge e = G[v][i];//頂点vが持つ行き先がi個ある？
            //行き先が最短距離更新できるならqueに入れる
            if(d[e.to] > d[v]+e.cost){
                //頂点e.toの現時点での最短距離より、vまでの最短経路+costの方が小さい
                d[e.to]=d[v]+e.cost;
                que.push(P(d[e.to], e.to));//e.toの最短距離はd[e.to]である
            }
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    V=n;
    for(int i=0;i<m;i++){
        int a,b; cin>>a>>b;
        a--; b--;
        G[a].push_back({b, 1});
        G[b].push_back({a, 1});
    }

    dijkstra(0);
    for(int i=0;i<n;i++){
        cout<<d[i]<<endl;
    }

    return 0;
}