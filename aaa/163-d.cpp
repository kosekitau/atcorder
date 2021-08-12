#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <map>
#include <set>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 1000000001
#define MOD 1000000007

ll mod(long long val, long long m) {
  ll res = val % m;
  if (res < 0) res += m;
  return res;
}

int main(void){
    int n, k;
    cin>>n>>k;
    ll s=0, mi[n+2], mx[n+2];
    mi[1]=0; mx[1]=n;
    for(int i=1;i<n+2;i++){
        mi[i+1]=mi[i]+i;
        mx[i+1]=mx[i]+(n-i);
    }
    
    for(int i=k;i<n+2;i++){
        s=(mod(s%MOD+mx[i]%MOD-(mi[i])%MOD, MOD)+1)%MOD;
    }
    cout<<s<<endl;
    return 0;
}