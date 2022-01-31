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
    int a,b;
    cin>>a>>b;
    if(a%3==0 || b%3==0 || (a+b)%3==0) cout<<"Possible"<<endl;
    else cout<<"Impossible"<<endl;
    return 0;
}