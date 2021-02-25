#include <iostream>
using namespace std;
int n,s,d;
int x[100], y[100];
int main(){
    cin >>n>>s>>d;
    for(int i=0;i<n;i++){
        cin >>x[i]>>y[i];
    }
    bool f=false;
    for(int i=0;i<n;i++){
        if(x[i]<s && d<y[i]){
            f=true;
            break;
        }
    }
    if(f) cout <<"Yes"<<endl;
    else cout << "No"<<endl;
    return 0;
}