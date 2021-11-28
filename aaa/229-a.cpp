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
    string n, m;
    cin>>n;
    cin>>m;

    if((n[0]=='.' && m[1]=='.') || (n[1]=='.' && m[0]=='.') ) cout<<"No"<<endl;
    else cout<< "Yes"<<endl;
    return 0;
}