#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool f=false;
    for(int i=1;i<10;i++){
        for(int j=1;j<10;j++){
            if(i*j==n) f=true;
        }
    }
    if(f) cout << "Yes"<<endl;
    else cout << "No"<<endl;
    return 0;
}