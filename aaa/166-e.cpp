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
    int n;
    cin>>n;
    int A[n+1];
    for(int i=1;i<=n;i++) cin>>A[i];
    
    ll cnt=0;
    map<int, int> mp;
    for(int i=1;i<=n;i++){
        cnt+=mp[i-A[i]];
        mp[A[i]+i]++;
    }
    cout<<cnt<<endl;
    return 0;
}