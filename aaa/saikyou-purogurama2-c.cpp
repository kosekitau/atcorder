#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int  a,b,r;
    cin>>a>>b;
    for(int i=b-a;i>0;i--){
        int k=b/i;
        if((k-1)*i>=a){
            r=i;
            break;
        }
    }
    cout<<r<<endl;
    return 0;
}