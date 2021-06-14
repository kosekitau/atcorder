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
    int n,m,x;
    cin>>n>>m>>x;
    int C[20], A[20][20];
    for(int i=0;i<n;i++){
        cin>>C[i];
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }
    
    int s, sts[20], r=2000000000;
    bool rst=false;
    for(int bit=0;bit<(1<<n);bit++){
        bool f=true;
        s=0;
        for(int i=0;i<m;i++) sts[i]=0;
        for(int i=0;i<n;i++){
            if(bit&(1<<i)){
                for(int j=0;j<m;j++) sts[j]+=A[i][j];
                s+=C[i];
            }
        }
        for(int i=0;i<m;i++) if(sts[i]<x) f=false;        
        if(f){
            r=min(r, s);
            rst=true;
        }
    }
    if(rst) cout<<r<<endl;
    else cout<<-1<<endl;
    return 0;
}