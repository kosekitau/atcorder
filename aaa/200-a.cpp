#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;

int main(){
    int a;
    cin>>a;
    if(a%100==0) cout<<a/100<<endl;
    else cout<<a/100+1<<endl;
    return 0;
}