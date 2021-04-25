#include <cstdio>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    ll a[200010], d=998244353;
    cin>>n;
    ll s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i]*a[i]%d;
    }
    sort(a, a+n);

    ll mn=0,mx=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            s+=a[i]*a[j]*pow(2, j-i-1);
            s%=d;
        }
    }
    cout<<s%d<<endl;
    return 0;
}