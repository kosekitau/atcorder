#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
int main(){
    int x,y;
    cin>>x>>y;
    if(y%2==0 && y>=2*x && 4*x>=y) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}