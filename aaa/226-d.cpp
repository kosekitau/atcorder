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
    int n;
    cin>>n;
    vector<P> p;
    for(int i=0;i<n;i++) {
        int x, y;
        cin>>x>>y;
        p.push_back({x, y});
    }

    set<P> s;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            int x=p[i].first-p[j].first;
            int y=p[i].second-p[j].second;
            while(1){
                if(x%2==1 && y%2==1) break;
                if(x==0 || y==0){
                    x=min(x, 1);
                    y=min(y, 1);
                    break;
                }
                x/=2; y/=2;
            }
            cout<<x<<' '<<y<<endl;
            s.insert({x, y});
            s.insert({-x, -y});
        }
    }
    cout<<s.size()<<endl;
    return 0;
}