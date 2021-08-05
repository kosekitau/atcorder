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
    int n;
    vector<P> p;
    cin>>n;
    for(int i=0;i<n;i++){
        int a, b; cin>>a>>b;
        p.push_back(make_pair(a, b));
    }
    sort(p.begin(), p.end());
    
    int r=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int mr;
            P k = make_pair(p[j].first-p[j].second+p[i].second, p[j].second+p[j].first-p[i].first);
            P l = make_pair(p[i].first-p[j].second+p[i].second, p[i].second+p[j].first-p[i].first);
            int kidx=lower_bound(p.begin(), p.end(), k)-p.begin();
            int lidx=lower_bound(p.begin(), p.end(), l)-p.begin();
            if(p[kidx]==k && p[lidx]==l){
                mr = pow(p[j].first-p[i].first, 2) + pow(p[j].second-p[i].second, 2);
                r = max(r, mr);
            }
        }
    }
    cout<<r<<endl;
    return 0;
}