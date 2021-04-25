#include <cstdio>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
using ll = long long;
int main(){
    int x,n,p[110]={0};
    cin>>x>>n;
    if(n==0){
        cout<<x<<endl;
        return 0;
    }
    for(int i=1;i<=n;i++){
        int P; cin>>P;
        p[P]++;
    }
    int i,j;
    for(i=x;i<101;i++){
        if(p[i]==0) break;
    }
    for(j=x;j>=0;j--){
        if(p[j]==0) break;
    }
    if(abs(x-i) == abs(x-j)) cout<<j<<endl;
    else if(abs(x-i) > abs(x-j)) cout<<j<<endl;
    else cout<<i<<endl;
    return 0;
}