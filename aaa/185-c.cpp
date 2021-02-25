#include <iostream>
using namespace std;
int main(){
    int l;
    int s=1;
    cin>> l;
    for(int i=1;i<12;i++){
        s*=(l-12+i);
        s/=i;
    }
    cout << s<<endl;
}