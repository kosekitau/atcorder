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

    ll s=0;
    for(int i=0;i<10000;i++){
        bool flag[10];
        memset(flag, false, sizeof(flag));
        int x=i;
        for(int j=0;j<4;j++){
            flag[x%10]=true;
            x/=10;
        }
        bool r=true;
        for(int j=0;j<10;j++){
            if(!flag[j] && S[j]=='o') r=false;
            if(flag[j] && S[j]=='x') r=false;
        }
        s+=r;
    }
    cout<<s<<endl;
    return 0;
}