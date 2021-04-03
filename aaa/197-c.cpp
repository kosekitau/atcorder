#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N;
    int A[22];
    cin>>N;
    for(int i=0;i<N;i++) cin>>A[i];
    
    int r=2000000000;
    for(int bit=0;bit<1<<(N-1);bit++){
        int xor_p=0;
        int or_p=0;
        for(int j=0;j<=N;j++){
            //i >> j & 1
            //iにj番目のフラグが立ってるか
            if(j<N){
                or_p=or_p | A[j];
            }
            if((bit>>j&1) || j==N){
                xor_p=or_p ^ xor_p;
                or_p=0;
            }
        }
        r=min(r, xor_p);
    }
    cout<<r<<endl;
    return 0;
}