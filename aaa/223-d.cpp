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

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 3001

int main(){
    int n, m;
    cin>>n>>m;
    
    vector<P> p;
    set<int> l, r;
    for(int i=1;i<=n;i++) p.push_back({i, i});
    for(int i=0;i<m;i++){
        int a, b;
        cin>>a>>b;
        auto itr1 = l.lower_bound(b);
        auto itr2 = r.lower_bound(a);
        if(*itr1==b && *itr2==a) {
            cout<<-1<<endl;
            return 0;
        }
        l.insert(a);
        r.insert(b);
        if(a>b) p[b-1].first+=a;
        
    }

    for(int i=0;i<n;i++) {
        if(p[i].first!=p[i].second){
            p[i].first++;
        }
    }

    sort(p.begin(), p.end());

    for(int i=0;i<n;i++) {
        if(i!=0) cout<<' '; 
        cout<<p[i].second;
    }
    cout<<endl;
    return 0;
}