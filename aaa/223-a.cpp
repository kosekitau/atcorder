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
    int x;
    cin>>x;
    if(x==0)cout<<"No"<<endl;
    else if(x%100==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
    return 0;
}