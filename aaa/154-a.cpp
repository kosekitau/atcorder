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

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 1000000007
#define MAX_N 10000000

int main(){
    string s, t, u;
    cin>>s>>t;
    int a, b;
    cin>>a>>b;
    cin>>u;
    if(u==s) cout<<a-1<<' '<<b<<endl;
    else cout<<a<<' '<<b-1<<endl;

    return 0;
}