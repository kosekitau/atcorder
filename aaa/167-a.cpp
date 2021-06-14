#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
#define MAX_A 1010

int main(){
    string s,t;
    cin>>s>>t;
    for(int i=0;i<s.size();i++){
        if(s[i]!=t[i]){
            cout<<"No"<<endl;
            return 0;
        }
    }
    if(s.size()+1 != t.size()){
        cout<<"No"<<endl;
        return 0;
    }
    cout<<"Yes"<<endl;
    return 0;
}