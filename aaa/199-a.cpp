#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a*a+b*b < c*c) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}