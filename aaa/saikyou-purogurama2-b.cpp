#include <cstdio>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    int  a[1010]={0}, b[1010]={0}, n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int k; cin>>k;
        a[k]++;
    }
    for(int i=0;i<m;i++){
        int k; cin>>k;
        b[k]++;
    }
    int s[1010]={0}, mx=0;
    for(int i=1;i<1001;i++){
        if((b[i]==0 && a[i]!=0) || (b[i]!=0 && a[i]==0)){
            s[i]++;
            mx=max(mx,i);
        }
    }
    
    for(int i=0;i<=mx;i++){
        if(s[i]!=0){
            cout<<i;
            if(i!=mx) cout<<' ';
        }
    }
    cout<<endl;
    return 0;
}