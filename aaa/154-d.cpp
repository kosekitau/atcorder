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
    int n, k;
    cin>>n>>k;
    int p[n];
    for(int i=0;i<n;i++) cin>>p[i];
    
    double K[1001], s=0;
    for(int i=1;i<1001;i++){
        s=s+i;
        K[i]=s/i;
    }

    
    double ans=0;
    for(int i=0;i<k;i++) ans+=K[p[i]];
    double r=ans;
    for(int i=0;i<n-k;i++){
        ans=ans-K[p[i]]+K[p[i+k]];
        r=max(ans, r);
    }
    printf("%.10lf\n", r);
    return 0;
}