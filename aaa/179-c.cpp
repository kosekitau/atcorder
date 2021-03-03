#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=0;
    for(int a=1;a<n;a++){
        for(int b=1;a*b<n;b++){
            s+=1;
        }
    }
    cout << s<<endl;
    return 0;
}