#include <iostream>
#include <cstring>
#include <algorithm>
#include <math.h>
using namespace std;
using ll = long long;
int main(){
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.size()-3;i++){
        if(s.substr(i,4) == "ZONe"){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}