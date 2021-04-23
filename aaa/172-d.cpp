#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin>>n;
    ll s=0;
    for(ll i=1;i<=n;i++){
        ll y=n/i;
        s+=y*(y+1)/2*i;
    }
    cout<<s<<endl;
    return 0;
}