#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int> >;

// 深さ優先探索
vector<bool> seen;
vector<int> tre;
void dfs(const Graph &G, int v) {
    // v から行ける各頂点 next_v について
    for (auto next_v : G[v]) { 
        tre[next_v]+=tre[v];
        dfs(G, next_v); // 再帰的に探索
    }
    return ;
}

int main(){
    int n, q;
    cin>>n>>q;
    Graph G(n);
    for(int i=0;i<n-1;i++){
        int a, b;
        cin>>a>>b;
        G[a-1].push_back(b-1);
    }
    tre.assign(n, 0);
    for(int i=0;i<q;i++){
        int p, x;
        cin>>p>>x;
        tre[p-1]+=x;
    }
    dfs(G, 0);

    for(int i=0;i<n;i++){
        cout<<tre[i]<<endl;
    }
    return 0;
}