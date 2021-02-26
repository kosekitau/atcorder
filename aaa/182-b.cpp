#include <iostream>
using namespace std;
int main(){
    int n;
    int a[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ss=0,r=2;
    for(int i=2;i<=1000;i++){
        int s=0;
        for(int j=0;j<n;j++){
            if(a[j]%i==0){
                s+=1;
            }
        }
        if(ss<s){
            ss=s;
            r=i;
        }
    }
    cout <<r<<endl;
    return 0;
}