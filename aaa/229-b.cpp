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
    string n, m;
    cin>>n;
    cin>>m;

    int lim=min(n.size(), m.size());
    bool f=false;
    for(int i=0;i<lim;i++){
        if((n[n.size()-i-1]-'0')+(m[m.size()-i-1]-'0')>9) f=true;
    }
    if(f) cout<<"Hard"<<endl;
    else cout<<"Easy" <<endl;
    return 0;
}