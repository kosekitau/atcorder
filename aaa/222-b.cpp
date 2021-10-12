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
#define MOD 100000
#define MAX_N 90010

int main(){
    int n, p;
    cin>>n>>p;
    int cnt=0;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        if(a<p) cnt++;
    } 
    cout<<cnt<<endl; 
    return 0;
}