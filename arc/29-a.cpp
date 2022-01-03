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

int main(){
    int n;
    cin>>n;
    int t[n];
    for(int i=0;i<n;i++) cin>>t[i];
    sort(t, t+n, greater<int>());

    int ans=t[0], ans2=0;
    for(int i=1;i<n;i++){
        if(ans>ans2) ans2+=t[i];
        else ans+=t[i];
    }

    cout<<max(ans, ans2)<<endl;

    return 0;
}