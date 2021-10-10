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

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 100000
#define MAX_N 90010

ll modsl(ll a, ll n){
    ll res=1;
    while(n>0){
        if(n & 1) res = res*a;
        a = a*a;
        n>>=1; 
    }
    return res;
}

int main(){
    int a, b;
    cin>>a>>b;
    if(a-b==0) cout<<1<<endl;
    else cout<<modsl(32, a-b)<<endl;
    return 0;
}