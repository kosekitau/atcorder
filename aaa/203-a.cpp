#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b) cout<<c<<endl;
    else if(b==c) cout<<a<<endl;
    else if(c==a) cout<<b<<endl;
    else cout<<0<<endl;
    return 0;
}