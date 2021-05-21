#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;

int main(){
    int q;
    int f[100010], A[100010], B[100010];
    memset(f, 1, sizeof(f));
    cin>>q;
    f[1]=0;
    for(int i=3;i<=100000;i++){
        for(int j=2;j*j<=i;j++){
            if(i%j==0) f[i]=0;
        }
    }
    memset(A, 0, sizeof(A));
    for(int i=1;i<=100000;i++){
        if(f[i] && f[(i+1)/2]) A[i]=1;
    }
    memset(B, 0, sizeof(B));
    for(int i=1;i<=100000;i++){
        B[i]=B[i-1]+A[i];
    }

    for(int i=0;i<q;i++){
        int l, r;
        cin>>l>>r;
        cout<<B[r]-B[l-1]<<endl;
    }

    return 0;
}