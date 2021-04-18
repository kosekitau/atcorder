#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    double x,y,z;
    cin>>x>>y>>z;
    int i;
    for(i=0;;i++){
        if(y/x <= i/z) break;
    }
    cout<<i-1<<endl;
    return 0;
}