#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
#define MAX_A 1010

int main(){
    int n;
    cin>>n;
    Graph G(n);

    for(int i=0;i<n;i++){
        int u, k;
        cin>>u>>k;
        for(int j=0;j<k;j++){
            int v; 
            cin>>v;
            G[u-1].push_back(v-1);
        }
    }
    vector<int> dist(n, -1);
    queue<int> que;

    dist[0]=0;
    que.push(0);

    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(int nv : G[v]){
            if(dist[nv]!=-1) continue;
            dist[nv]=dist[v]+1;
            que.push(nv);
        }
    }

    for(int i=0;i<n;i++) cout<<i+1<<' '<<dist[i]<<endl;
    
    return 0;
}