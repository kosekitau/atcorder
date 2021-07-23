#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <tuple>
#include<cmath>
#include<iomanip>

using namespace std;
using ll = long long;
typedef pair<int, int> P;
#define INF 2100000000
#define MOD 1000000007

ll a,b,n;

ll f(ll x){
    return a*x/b - a*(x/b);
}

int main(){
    cin>>a>>b>>n;
    ll r;
    if(b-1<=n) r=b-1;
    else r=n;

    cout<<f(r)<<endl;
    return 0;
}