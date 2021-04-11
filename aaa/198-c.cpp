#include <cstdio>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
    double r,x,y;
    double e;
    cin>>r>>x>>y;
    e=sqrt( pow(x,2)+pow(y,2) );
    if( fmod(e,r)==0 ) cout<<e/r<<endl;
    else if(e<r) cout<<2<<endl;
    else cout<<(int)e/(int)r +1<<endl;
    return 0;
}