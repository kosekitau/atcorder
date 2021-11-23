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
    set <vector<int> > x;
    int n; cin>>n;

    for(int i=0;i<n;i++){
        int l; cin>>l;
        vector <int> y;
        for(int j=0;j<l;j++){
            int a; cin>>a;
            y.push_back(a);
        }
        x.insert(y);
    }

    cout<<x.size()<<endl;
    return 0;
}