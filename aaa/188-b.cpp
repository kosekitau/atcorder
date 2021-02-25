#include <iostream>
using namespace std;
int main(){
    int n;
    int a[100000], b[100000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int s=0;
    for(int i=0;i<n;i++){
        s+=a[i]*b[i];
    }
    if(s) cout << "No"<<endl;
    else cout << "Yes"<<endl;
    return 0;
}