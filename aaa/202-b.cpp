#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;

int main(){
    string S;
    cin>>S;
    string r="";
    for(int i=0;i<S.size();i++){
        if(S[i]=='9') r+='6';
        else if(S[i]=='6') r+='9';
        else r+=S[i];
    }
    for(int i=S.size()-1;i>=0;i--){
        cout<<r[i];
    }
    cout<<endl;
    return 0;
}