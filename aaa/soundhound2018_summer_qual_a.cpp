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
    if(a+b==15) cout<<'+'<<endl;
    else if(a*b==15) cout<<'*'<<endl;
    else cout<<'x'<<endl;
    return 0;
}