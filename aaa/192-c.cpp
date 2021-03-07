#include <iostream>
#include <math.h>
using namespace std;

int g1(int n){
    int a[10]={0};
    
    for(int i=0;n>0;i++){
        a[n%10]++;
        n/=10;
    }
    int g=0, s=0;
    for(int i=0;i<10;i++){
        for(;a[i]>0;s++,a[i]--){
            g+=i*pow(10,s);
        }
    }
    return g;
}

int g2(int n){
    int a[10]={0};
    for(int i=0;n>0;i++){
        a[n%10]++;
        n/=10;
    }
    int g=0, s=0;
    for(int i=9;i>=0;i--){
        for(;a[i]>0;s++,a[i]--){
            g+=i*pow(10,s);
        }
    }
    return g;
}

int main(){
    int k,n;
    cin>>n>>k;
    int f=n;
    for(int i=0;i<k;i++){
        f=g1(f)-g2(f);
    }
    cout<<f<<endl;
    return 0;
}