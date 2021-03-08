#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int n,A[100000],N[100000],X[100000];
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>A[i]>>N[i]>>X[i];
        X[i]-=A[i];
    }
    int y=1000000000;
    for(int i=0;i<n;i++){
        if(X[i]>0){
            y=min(y, N[i]);
        }
    }

    if(y==1000000000) cout<<-1<<endl;
    else cout<<y<<endl;
    return 0;
}