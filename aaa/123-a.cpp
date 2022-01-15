#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <set>
#include <tuple>
#include <map>
#include <numeric>

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<string, string>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    int a[5],k;
    for(int i=0;i<5;i++) cin>>a[i];
    cin>>k;
    bool f=true;
    for(int i=1;i<5;i++){
        if(a[i]-a[0]>k) f=false;
    }

    if(f) cout<<"Yay!"<<endl;
    else cout<<":("<<endl;
    
    return 0;
}