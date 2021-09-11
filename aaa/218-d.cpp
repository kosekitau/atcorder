#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <set>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 1000000007

int main(){
    int n;
    cin>>n;
    vector<P> p;
    for(int i=0;i<n;i++){
        int x, y;
        cin>>x>>y;
        p.push_back(make_pair(x, y));
    }
    
    sort(p.begin(), p.end());
    ll cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int fx=p[i].first, fy=p[i].second;
            int sx=p[j].first, sy=p[j].second;
            int dx=sx-fx, dy=sy-fy;
            if(dx==0 || dy==0) continue;
            int nx1=sx, ny1=fy;
            int nx2=fx, ny2=sy; 
            int idx1 = lower_bound(p.begin(), p.end(), make_pair(nx1, ny1))-p.begin();
            int idx2 = lower_bound(p.begin(), p.end(), make_pair(nx2, ny2))-p.begin();
            if(make_pair(nx1, ny1)==p[idx1] && make_pair(nx2, ny2)==p[idx2]) cnt++;
        }
    }
    cout<<cnt/2<<endl;

    return 0;
}