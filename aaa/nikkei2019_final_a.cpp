//https://atcoder.jp/contests/nikkei2019-final/tasks/nikkei2019_final_a
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
    int n, A[3010];
    cin>>n;
    ll SA[3010];
    SA[0]=0;
    for(int i=1;i<=n;i++){
        cin>>A[i];
        SA[i]=SA[i-1]+A[i];
    }
    
    ll R[3010];
    for(int i=1;i<=n;i++){
        ll mx=0;
        for(int j=i;j<=n;j++){
            mx=max(SA[j]-SA[j-i], mx);
        }
        R[i]=mx;
    }
    for(int i=1;i<=n;i++) cout<<R[i]<<endl;
    return 0;
}