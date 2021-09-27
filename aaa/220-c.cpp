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
#define MOD 1000000007
#define MAX_N 10000000

int main(){
    ll n;
    cin>>n; 
    ll A[n], x;
    for(int i=0;i<n;i++) cin>>A[i];
    cin>>x;
    ll sm=0;
    for(int i=0;i<n;i++) sm+=A[i];
    
    ll k=x/sm, ans=0;
    ans+=k*n;
    ll xx=x-k*sm;
    for(int i=0;i<n;i++){
        xx-=A[i];
        ans++;
        if(xx<0) break;
    }
    cout<<ans<<endl;
    return 0;
}