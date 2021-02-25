#include <iostream>
using namespace std;
int v,t,s,d;
int main(){
    cin >> v>>t>>s>>d;
    if(v*t<=d && d<=v*s) cout << "No"<<endl;
    else cout << "Yes"<<endl;
    return 0;
}