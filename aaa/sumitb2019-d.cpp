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
    int N;
    string S;
    cin>>N>>S;
    
    int s=0;
    for(int i=0;i<1000;i++){
        string pass="";
        int a=i;
        for(int j=0;j<3;j++){
            pass+=to_string(a%10);
            a/=10;
        }
        int f=0;
        for(int j=0;j<S.size();j++){
            if(pass[2-f]==S[j]) f++;
        }
        if(f==3) s++;
    }
    cout<<s<<endl;
    
    return 0;
}