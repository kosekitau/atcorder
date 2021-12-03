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
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    int n, m;
    cin>>n;
    vector<P> p; 
    for(int i=0;i<n;i++){
        int x, y;
        cin>>x>>y;
        p.push_back({x, y});
    }

    map<P, int> M;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            int dx=p[i].first-p[j].first;
            int dy=p[i].second-p[j].second;
            M[{dx, dy}]++;
        }
    }
    int mx=0;
    for(auto x: M) mx=max(mx, x.second);
    cout<<n-mx<<endl;
    return 0;
}