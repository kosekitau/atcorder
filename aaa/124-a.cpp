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
using Graph = vector<vector<ll> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    int a, b;
    cin>>a>>b;
    if(a==b) cout<<a+b<<endl;
    else if(a>b) cout<<2*a-1<<endl;
    else cout<<2*b-1<<endl;

    return 0;
}