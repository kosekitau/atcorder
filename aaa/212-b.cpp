#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000001
#define MOD 1000000007
int main(){
    string s;
    int x[10];
    cin>>s;
    for(int i=0;i<4;i++) x[i]=s[i]-'0';
    if(x[0]==x[1] && x[0]==x[2] && x[0]==x[3]){
        cout<<"Weak"<<endl;
        return 0;
    }
    for(int i=0;i<3;i++){
        if((x[i]+1)%10!=x[i+1]){
            cout<<"Strong"<<endl;
            return 0;
        }
    }
    cout<<"Weak"<<endl;
    return 0;
}