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
    int a, b;
    cin>>a>>b;
    if(a<b) for(int i=0;i<b;i++) cout<<a;
    else for(int i=0;i<a;i++) cout<<b;
    cout<<endl;
    return 0;
}