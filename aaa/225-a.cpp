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
#define MOD 998244353
#define MAX_N 3001

int main(){
    string n;
    cin>>n;
    if(n[0]==n[1] && n[1]==n[2] && n[2]==n[0]) cout<<1<<endl;
    else if(n[0]!=n[1] && n[1]!=n[2] && n[2]!=n[0])cout<<6<<endl;
    else cout<<3<<endl;

    return 0;
}