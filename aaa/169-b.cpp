#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
int main(){
    ll n,s=1,s2=1,a[100010];
    cin>>n;
    int z=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0) z++;
    }

    if(z){
        cout<<0<<endl;
        return 0;
    }
    
    for(int i=0;i<n;i++){
        if(a[i]<=1000000000000000000/s){
            s*=a[i];
        }
        else{
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<s<<endl;
    return 0;
}