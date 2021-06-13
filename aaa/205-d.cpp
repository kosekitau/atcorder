#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
#define MAX_A 1010

int main(){
    int n,q;
    cin>>n>>q;
    ll A[100010], K[100010];
    for(int i=1;i<=n;i++) cin>>A[i];
    for(int i=1;i<=q;i++) cin>>K[i];

    sort(K, K+q);
    
    ll m=0, k=1, ss=0, R[100010];
    for(int i=1;i<=n;i++){
        ll ss += A[i]-m+1;
        if(ss>=K[k]){
            R[k]=A[i]+k
        }
    }
    return 0;
}