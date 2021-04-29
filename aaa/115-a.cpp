#include <cstdio>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
using ll = long long;

int main(){
    int n,m,e=0,o=0;
    cin>>n>>m;

    for(int i=0;i<n;i++){
        string s; int c=0;
        cin>>s;
        for(int j=0;j<m;j++){
            if(s[j]=='0') c++; 
        }
        if(c%2==0) e++;
        else o++;
    }
    cout<<e*o<<endl;
    return 0;
}