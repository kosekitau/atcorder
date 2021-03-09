#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    vector <int> A(1000),B(1000);
    cin>>n;
    for(int i=0;i<n;i++) cin>>A[i]>>B[i];
    
    int mn=200000;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) mn=min(mn, A[i]+B[j]);
            else mn=min(mn, max(A[i],B[j]));
        }
    }
    
    cout<<mn<<endl;
    return 0;
}