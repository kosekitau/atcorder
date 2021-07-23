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


int main(){
    ll x, i;
    cin>>x;
    ll s=100;
    for(i=1;;i++){
        s=s+s/100;
        if(s>=x) break;
    }
    cout<<i<<endl;
    return 0;
}