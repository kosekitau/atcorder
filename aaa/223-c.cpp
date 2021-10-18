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
#define MOD 998244353
#define MAX_N 3001

int main(){
    int n;
    cin>>n;
    double A[n], B[n];
    for(int i=0;i<n;i++) cin>>A[i]>>B[i];
    
    double lst[n], sum=0;
    for(int i=0;i<n;i++) {
        lst[i]=A[i]/B[i];
        sum+=lst[i];
    }
    double cum[n], half=sum/2;
    cum[0]=lst[0];
    for(int i=1;i<n;i++) cum[i]=lst[i]+cum[i-1];

    int idx=0;
    double ans=0;
    for(int i=0;i<n;i++){
        if(cum[i]>=half){
            idx=i;
            break;
        }
        ans+=A[i];
    }
    
    double d;
    if(idx==0) d=half;
    else d=half-cum[idx-1];
    printf("%.10lf\n", ans+d*B[idx]);
    return 0;
}