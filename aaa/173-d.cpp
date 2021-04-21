#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
int main(){
    int n;
    ll a[200010];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a, a+n, greater<int>());
    
    ll s=0;
    for(ll i=1;i<n;i++){
        s+=a[i/2];
    }
    cout<<s<<endl;
    return 0;
}