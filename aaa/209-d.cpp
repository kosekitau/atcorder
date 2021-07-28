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
    int n, q;
    cin>>n>>q;
    vector<vector<int> > G(n, vector<int>(0));
    for(int i=0;i<n-1;i++){
        int a, b; cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    ll dist[n];
    return 0;
}