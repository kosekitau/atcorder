#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <math.h>
using namespace std;
using ll = long long;
int main(){
    int n, fib[50];
    cin>>n;
    fib[0]=1; fib[1]=1;
    for(int i=2;i<=n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    cout<<fib[n]<<endl;
    return 0;
}