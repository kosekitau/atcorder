//https://atcoder.jp/contests/s8pc-6/tasks/s8pc_6_b

#include <iostream>
#include <math.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    cin>>n;
    ll A[31], B[31];
    for(int i=0;i<n;i++){
        cin>>A[i]>>B[i];
    }
    
    ll r = 1000000000000000000;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ll mn = 0;
            for(int k=0;k<n;k++){
                mn += abs(A[i]-A[k])+abs(A[k]-B[k])+abs(B[k]-B[j]);
            }
            r = min(r, mn);
        }
    }
    cout<<r<<endl;
}