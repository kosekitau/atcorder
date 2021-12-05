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
    int n, d ;
    cin>>n>>d;
    vector<P> p;
    for(int i=0;i<n;i++){
        int l, r;
        cin>>l>>r;
        p.push_back({r, l});
    }
    sort(p.begin(), p.end());

    int x=-INF, cnt=0;
    for(int i=0;i<n;i++){
        int l=p[i].second, r=p[i].first;
        if(x+d-1<l){
            cnt++;
            x=r;
        }
    }
    cout<<cnt<<endl;
    return 0;
}