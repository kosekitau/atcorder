#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <utility>
using namespace std;
using ll = long long;
int main(){
    int n,q;
    string s;
    cin>>n;
    cin>>s;
    cin>>q;
    int l=0;
    for(int i=0;i<q;i++){
        int t,a,b;
        cin>>t>>a>>b;
        if(t==1) swap(s[(l+a-1)%(2*n)],s[(l+b-1)%(2*n)]);
        else{
            if(l==0) l+=n;
            else l-=n;
        }
    }

    for(int i=0;i<2*n;i++)
        cout<<s[(i+l)%(2*n)];
    
    cout<<endl;
    return 0;
}