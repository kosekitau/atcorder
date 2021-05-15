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
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a, a+3);
    if(a[2]-a[1] == a[1]-a[0]) cout<<"Yes"<<endl;
    else cout<<"No"<<endl; 
    return 0;
}