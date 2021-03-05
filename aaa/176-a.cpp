#include <iostream>
using namespace std;
int main(){
    int n,x,t;
    cin>>n>>x>>t;
    int s=0;
    if(n%x==0) s=n/x*t;
    else s=n/x*t+t;
    
    cout << s<<endl;
    return 0;
}