#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
int main(){
    int n, A[100010]={0},q;
    ll s=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        A[a]++;
        s+=a;
    }
    cin>>q;
    ll r[100010];
    for(int i=0;i<q;i++){
        int b,c;
        cin>>b>>c;
        s=s+A[b]*(c-b);
        r[i]=s;
        A[c]+=A[b]; 
        A[b]=0;
    }

    for(int i=0;i<q;i++) cout<<r[i]<<endl;
    return 0;
}