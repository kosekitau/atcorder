#include <iostream>
using namespace std;
int main(){
    int n;
    long long s=0, mx=0, a[200001];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mx=max(a[i],mx);
        s+=mx-a[i];
    }
    cout<<s<<endl;
    return 0;
}