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
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 1000000007
#define MAX_N 10000000

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c) cout<<"No"<<endl;
    else if(a!=b && b!=c && c!=a) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;
}