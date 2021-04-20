#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    int c=0, s=0, r[2010], mx=500500;
    for(int i=1;i<a;i++){
        r[c++]=i;
        s+=i;
    }
    r[c++]=mx-s;
    s=0;
    for(int j=1;j<b;j++){
        r[c++]=j*-1;
        s+=j;
    }
    r[c]=-1*(mx-s);
    int k;
    for(k=0;k<a+b-1;k++){
        cout<<r[k]<<' ';
    }
    cout<<r[k]<<endl;
    return 0;
}