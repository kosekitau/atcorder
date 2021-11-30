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
    int o=0, e=0, n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        if(a%2==0) e++;
        else o++;
    }

    if(o%2==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}