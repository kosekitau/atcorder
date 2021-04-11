#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    
    string s;
    cin>>s;
    string m=s;
    while(s.length()<20){
        reverse(s.begin(), s.end());
        if(m==s){
            cout<<"Yes"<<endl;
            return 0;
        }
        reverse(s.begin(), s.end());
        s='0'+s;
        m=s;
    }
    cout<<"No"<<endl;
    
    return 0;
}