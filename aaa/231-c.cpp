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
#define MAX_N 200010

int main(){
    int n, q;
    cin>>n>>q;
    int A[n];
    for(int i=0;i<n;i++) cin>>A[i];
    sort(A, A+n);
    for(int i=0;i<q;i++){
        int x; cin>>x;
        int idx=lower_bound(A, A+n, x) -A;
        cout<<n-idx<<endl;
    }
    return 0;
}