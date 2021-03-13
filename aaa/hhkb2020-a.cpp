#include <iostream>
using namespace std;
int main(){
    char S, T;
    cin>>S>>T;
    if(S=='Y') cout<<(char)(T-32)<<endl;
    else cout<<T<<endl;
    return 0;
}