#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
int main(){
    ll n;
    cin>>n;
    string s="";
    while(n){
        ll a = n%26;
        if(a==0) a=26;
        n = (n-a)/26;
        s+=(char)('a'+a-1);
    }
    reverse(s.begin(), s.end());
    cout<<s<<endl;
    return 0;
}