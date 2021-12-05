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
    vector<int> p;
    int mx=0, mn=200;
    
    for(int i=0;i<3;i++){
        int a; cin>>a;
        p.push_back(a);
        mx=max(mx, a); mn=min(mn, a);
    }
    
    for(int i=0;i<3;i++) {
        if(p[i]==mx) cout<<1<<endl;
        else if(p[i]==mn) cout<<3<<endl;
        else cout<<2<<endl;
    }
    
    return 0;
}