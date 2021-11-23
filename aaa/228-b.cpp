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
    int n, x;
    cin>>n>>x;
    
    int A[n+1], S[n+1];
    for(int i=0;i<n+1;i++) S[i]=0;
    for(int i=1;i<n+1;i++) cin>>A[i];
    
    int nx=A[x]; S[x]++;
    for(int i=0;i<n;i++){
        S[nx]++;
        nx=A[nx];
    }
    int ans=0;
    for(int i=0;i<n+1;i++) if(S[i]>0) ans++;
    cout<<ans<<endl;
    
    return 0;
}