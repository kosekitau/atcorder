#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        ll n; cin>>n;
        if(n%2==1) cout<<"Odd"<<endl;
        else if(n%4==0) cout<<"Even"<<endl;
        else cout<<"Same"<<endl;
    }

    return 0;
}