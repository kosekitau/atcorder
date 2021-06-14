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
    ll A[100010], K[100010], C[100010];
    C[0]=0; A[0]=0;
    for(int i=1;i<=n;i++){
        cin>>A[i];
        C[i]=A[i]-A[i-1]-1 + C[i-1];
    }
    for(int i=1;i<=q;i++) cin>>K[i];
    
    for(int i=1;i<=q;i++){
        if(K[i]>C[n]){
            cout<<K[i]-C[n]+A[n]<<endl;
        } else {
            //Cの中でK[i]になるとこ
            int idx = lower_bound(C, C+n, K[i]) - C;
            cout<<A[idx-1]+K[i]-C[idx-1]<<endl;
            //cout<<A[idx]-(C[idx]-K[i]+1)<<endl;
        }
    }
    return 0;
}