#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
int main(){
    string n;
    cin>>n;
    int a=n.size()-1;
    if(n[a] == '3') cout<<"bon"<<endl;
    else if(n[a]=='0' || 
    n[a]=='1' ||
    n[a]=='6' ||
    n[a]=='8'){
        cout<<"pon"<<endl;
    }
    else{
        cout<<"hon"<<endl;
    }
    return 0;
}