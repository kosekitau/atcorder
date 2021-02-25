#include <iostream>
using namespace std;
int main(){
    string a, b;
    cin>>a>>b;
    int sa=0,sb=0;
    for(int i=0;a[i]!='\0';i++){
        sa+=a[i]-'0';
    }
    for(int i=0;b[i]!='\0';i++){
        sb+=b[i]-'0';
    }
    if(sa<sb) cout << sb<<endl;
    else cout<<sa<<endl;
    return 0;
}