#include <iostream>
using namespace std;
int main(){
    int n; 
    int x[1000], y[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    double k=0;
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if( abs(y[i]-y[j]) <= abs(x[i]-x[j]) )
                c++;
        }
    }
    cout<<c<<endl;
    return 0;
}