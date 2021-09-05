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
#define INF 2000000003
#define MOD 1000000007

int main(){
    int c[4]={0,0,0,0};
    string S[4]={"ABC", "ARC", "AGC", "AHC"};

    for(int i=0;i<3;i++){
        string s;
        cin>>s;
        if(s=="ABC") c[0]++;
        else if(s=="ARC") c[1]++;
        else if(s=="AGC") c[2]++;
        else c[3]++;
    }
    
    for(int i=0;i<4;i++){
        if(c[i]==0){
            cout<<S[i]<<endl;
            return 0;
        }
    }
    return 0;
}