#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
int main(){
    int n;
    long x[100000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    long s=0;
    for(int i=0;i<n;i++){
        s+=abs(x[i]);
    }
    cout<<s<<endl;

    s=0;
    for(int i=0;i<n;i++){
        s+=pow(abs(x[i]), 2);
    }
    printf("%.15lf\n", sqrt(s) );
    
    s=0;
    for(int i=0;i<n;i++){
        s=max(s, abs(x[i]));
    }
    cout<<s<<endl;
    
    return 0;
}