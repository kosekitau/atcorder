#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int mx=0,r=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='R'){
            r++;
        }
        else{
            mx=max(r,mx);
            r=0;
        }
    }
    mx=max(r,mx);
    cout<<mx<<endl;
    return 0;
}