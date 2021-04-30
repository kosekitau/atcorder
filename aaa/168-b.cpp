#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
int main(){
    string s;
    int k;
    cin>>k;
    cin>>s;
    
    if(s.size() <= k) 
        cout<<s<<endl;
    else {
        cout<<s.substr(0, k)<<"..."<<endl;
    }
    return 0;
}