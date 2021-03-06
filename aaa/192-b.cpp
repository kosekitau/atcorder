#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool f=false;
    for(int i=0;i<s.size();i++){
        if(i%2){
            if('A'>s[i] || s[i]>'Z') f=true;
        }
        else{
            if('a'>s[i] || s[i]>'z') f=true;
        }
        if(f){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}