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
    ll h;
    cin>>h;
    ll lm=floor(log2(h));
    ll ans=0;
    for(ll i=1;i<=lm;i++) ans+=powl(2, i);
    cout<<ans+1<<endl;
    return 0;
}