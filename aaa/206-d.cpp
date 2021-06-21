#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 1000000000

int main(){
    int n, A[200010],C[200010];
    cin>>n;
    for(int i=0;i<n;i++) cin>>A[i];
    for(int i=0;i<200010;i++) C[i]=0;

    int cent=n/2;
    int val=0;
    for(int i=0;i<cent;i++){
        if(A[i]==A[n-i-1]){
            continue;
        }
        else{
            if(C[A[i]]==0){
                val++;
                C[A[i]]++;
            }
            if(C[A[n-i-1]]==0){
                val++;
                C[A[n-i-1]]++; 
            }
        }
    }
    if(val==0) cout<<0<<endl;
    else cout<<val-1<<endl;
    return 0;
}