#include <iostream>
using namespace std;

int main(){
    long long x,y,a,b,i,j,k=0;
    cin>>x>>y>>a>>b;
    for(i=0;;i++){
        if(x*a>=y && a*x>x+b) break;
        x*=a;
    }
    cout<<i+(y-)<<endl;
    return 0;
}