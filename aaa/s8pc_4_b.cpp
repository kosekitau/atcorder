#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <tuple>
#include <limits.h>

using namespace std;
using ll = long long;
#define INF 20000000000

int main(){
    int n, k;
    cin>>n>>k;
    ll a[n], ma[n], m=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m=max(m, a[i]);
        ma[i]=m;    
    }
    
    ll r=INF;
    for(int bit=0;bit<(1<<n);bit++){
        if(__builtin_popcount(bit)==k){
            ll s=0, z=0;
            for(int i=0;i<n;i++){
                if(bit & (1<<i)){
                    s+=max(ma[i], z) -a[i];
                    z=max(ma[i], z)+1;
                }
            }
            r=min(r,s); 
        }
    }
    cout<<r<<endl;
    return 0;
}