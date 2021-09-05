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
    ll n;
    cin>>n;
    ll A[n], m[n+1];
    ll su=0;
    memset(m, 0, sizeof(m));
    for(int i=0;i<n;i++) {
        cin>>A[i];
        m[A[i]]++;
    }
    for(int i=1;i<=n;i++) su+=max(0*1LL, m[i]*(m[i]-1)/2);

    for(int i=0;i<n;i++) cout<<su-(m[A[i]]-1)<<endl;

    return 0;
}