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
using P = pair<int, int>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    int n;
    cin>>n;
    int H[n];
    for(int i=0;i<n;i++) cin>>H[i];
    
    int mx=H[0];
    bool f=true;
    for(int i=1;i<n;i++){
        if(mx-H[i]>1) f=false;
        mx=max(mx, H[i]);
    }
    if(f) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}