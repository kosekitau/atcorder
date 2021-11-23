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
    int n, k, a;
    cin>>n>>k>>a;
    if((a+k-1)%n==0) cout<<n<<endl;
    else cout<<(a+k-1)%n<<endl;
    return 0;
}