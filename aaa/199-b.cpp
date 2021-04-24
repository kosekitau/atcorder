#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
int main(){
    int n;
    cin>>n;
    int a,b,mn=1000,mx=0;
    for(int i=0;i<n;i++){
        cin>>a;
        mx = max(mx, a);
    }
    for(int i=0;i<n;i++){
        cin>>b;
        mn = min(mn, b);
    }
    if(mn-mx+1>0) cout<<mn-mx+1<<endl;
    else cout<<0<<endl;
    return 0;
}