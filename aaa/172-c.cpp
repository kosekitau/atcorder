#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
#define S 200010
 
int main(){
    int  n,m,k;
    ll a[S],b[S];
    cin>>n>>m>>k;
    a[0]=0;b[0]=0;
    for(int i=0;i<n;i++){
        int s;
        cin>>s;
        a[i+1]=s+a[i];
    }
    for(int i=0;i<m;i++){
        int s;
        cin>>s;
        b[i+1]=s+b[i];
    }
 
    int z=m, mx=0;
    for(int i=0;i<=n;i++){
        for(int j=z;j>=0;j--){
            if(b[j]<=k-a[i]){
                z=j;
                mx=max(mx, i+j);
                break;
            }
        }
    }
    cout<<mx<<endl;
    return 0;
}