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
    int a,b;
    cin>>a>>b;
    if(a==b) cout<<a<<endl;
    else cout<<3-(a+b)<<endl;
    return 0;
}