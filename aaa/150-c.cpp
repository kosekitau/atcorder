#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
    int n;
    int P[10], Q[10];
    cin>>n;
    vector<int> o(n);
    for(int i=0;i<n;i++) cin>>P[i];
    for(int i=0;i<n;i++) cin>>Q[i];
    for(int i=0;i<n;i++) o[i]=i+1;
    
    int a,b,k=1;
    do{
        bool f1=true, f2=true;
        for(int i=0;i<n;i++) if(P[i]!=o[i]) f1=false;
        for(int i=0;i<n;i++) if(Q[i]!=o[i]) f2=false;

        if(f1) a=k; if(f2) b=k;
        k++;
    }while(next_permutation(o.begin(), o.end()));
    cout<<abs(a-b)<<endl;
    return 0;
}