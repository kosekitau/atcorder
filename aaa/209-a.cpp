#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000001
#define MOD 1000000007
int main(){
    int n, m;
    cin>>n>>m;
    if(m-n+1 >=0) cout<<m-n+1<<endl;
    else cout<<0<<endl;
    return 0;
}