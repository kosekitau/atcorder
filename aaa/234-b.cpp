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
    double x[n], y[n];
    for(int i=0;i<n;i++) cin>>x[i]>>y[i];
    
    double ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            double a=sqrt((y[j]-y[i])*(y[j]-y[i]) + (x[j]-x[i])*(x[j]-x[i]));
            ans=max(a, ans);
        }
    }
    printf("%.10lf\n", ans);

    return 0;
}