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
    double n, k;
    cin>>n>>k;
    double al=n*n*n;
    double ans1=(k-1)*(n-k)*6/al;
    double ans2=(n-k)*3/al;
    double ans3=((k-1)*3+1)/al;
    printf("%.10lf\n", ans1+ans2+ans3);
    return 0;
}