#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000001
#define MOD 1000000007
int main(){
    ll n;
    cin>>n;
    ll c[n];
    for(int i=0;i<n;i++) cin>>c[i];
    sort(c, c+n);
    ll s=1;
    for(int i=0;i<n;i++) s=s*(c[i]-i)%MOD;
    
    cout<<s<<endl;
    return 0;
}