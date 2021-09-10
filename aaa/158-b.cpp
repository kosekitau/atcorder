#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <set>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 1000000007

int main(){
    ll n, a, b;
    cin>>n>>a>>b;
    
    ll c=n/(a+b);
    ll d=n%(a+b);
    ll ans=0;
    ans+=c*a+min(d, a);
    cout<<ans<<endl; 
    return 0;
}