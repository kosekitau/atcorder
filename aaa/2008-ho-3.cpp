#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <tuple>
#include<cmath>
#include<iomanip>

using namespace std;
using ll = long long;
typedef pair<int, int> P;
#define INF 2100000000
#define MOD 1000000007


int main(){
    int n,m;
    cin>>n>>m;
    n++;
    ll p[n];
    p[0]=0;
    for(int i=1;i<n;i++) cin>>p[i];

    ll pp[n*n];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) pp[i*n+j]=p[i]+p[j];
    sort(pp, pp+n*n);

    ll r=0, s;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            s=lower_bound(pp, pp+n*n, m-(p[i]+p[j]))-pp;
            if(0<s&& s<n*n) r=max(r, p[i]+p[j]+pp[max(0*1LL,s-1)] );
            
        }
    }
    cout<<r<<endl;
    return 0;
}