#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
    int n; 
    int a[200000];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1, a+n+1);
    int m=0, u=0;
    for(int i=1;i<=n;i++){
        m+=a[i]*(n-i);
        u+=a[i]*(i-1);
    }
    cout<<u-m<<endl;
    return 0;
}