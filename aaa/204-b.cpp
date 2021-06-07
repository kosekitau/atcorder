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
    int n;
    int a[1010];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    int s=0;
    for(int i=0;i<n;i++){
        if(a[i]>10) s=s+(a[i]-10);
        else s+=0;
    }
    cout<<s<<endl;
  
    return 0;
}