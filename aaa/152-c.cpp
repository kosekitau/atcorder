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
    int P[n];
    for(int i=0;i<n;i++) cin>>P[i];
    
    int mn=INF, cnt=0;
    for(int i=0;i<n;i++) {
        if(mn>=P[i]) cnt++;
        mn=min(mn, P[i]);
    }
    cout<<cnt<<endl;
    return 0;
}