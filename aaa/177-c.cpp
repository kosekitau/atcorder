#include <iostream>
using namespace std;

int main(){
    int n;
    long long a[200000];
    long long r[200001];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        r[i+1]=r[i]+a[i];
    }
    long long s=0;
    for(int i=0;i<n;i++){
        s+=a[i]*(r[n]-r[i+1]);
    }
    cout<<s%1000000007<<endl;
    return 0;
}