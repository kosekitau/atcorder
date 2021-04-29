#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
int main(){
    ll a, b2;
    double b;
    cin>>a>>b;
    b2 = b*100+0.5;
    printf("%lld\n", (a*b2)/100);
    return 0;
}