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
using P = pair<string, string>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

ll f(ll x){
    return x*x + 2*x +3;
} 

int main(){
    ll n;
    cin>>n;
    
    cout<<f(f(f(n)+n) + f(f(n)))<<endl;

    return 0;
}