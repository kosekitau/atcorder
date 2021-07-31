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
    int a,b;
    cin>>a>>b;
    if(0<a && b==0){
        cout<<"Gold"<<endl;
    }
    else if(a==0 && 0<b){
        cout<<"Silver"<<endl;
    }
    else{
        cout<<"Alloy"<<endl;
    }
    return 0;
}