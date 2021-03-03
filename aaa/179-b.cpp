#include <iostream>
using namespace std;
int main(){
    int n,s=0;
    cin>>n;
    bool f=false;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a==b) s+=1;
        else s=0;
        if(s>2) f=true;
    }
    if(f) cout <<"Yes"<<endl;
    else cout <<"No"<<endl;
    
    return 0;
}