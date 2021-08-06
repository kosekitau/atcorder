#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <map>
#include <set>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000001
#define MOD 1000000007
int main(){
    int n, m;
    vector<P> org, lst;
    cin>>m; org.resize(m);
    for(int i=0;i<m;i++) cin>>org[i].first>>org[i].second;
    sort(org.begin(), org.end());
    cin>>n; lst.resize(n);
    for(int i=0;i<n;i++) cin>>lst[i].first>>lst[i].second;
    //sort(lst.begin(), lst.end());
    
    for(int i=0;i<m;i++){
        int ix = org[i].first; int iy = org[i].second;
        for(int j=0;j<n;j++){
            int jx = lst[j].first; int jy = lst[j].second;
            int dx = jx-ix; int dy = jy-iy;//(2, -3)
            int s=0;
            for(int k=0;k<n;k++){
                int nx = lst[k].first-dx; int ny = lst[k].second-dy;
                int idx = lower_bound(org.begin(), org.end(), make_pair(nx, ny)) - org.begin();
                if(org[idx].first==nx && org[idx].second==ny) s++;
            }
            if(s==m){
                cout<<dx<<' '<<dy<<endl;
                return 0;
            }
        }
    }
    return 0;
}