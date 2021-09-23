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
    int n, mx=0;
    cin>>n;
    vector<string> S;
    map<string, int> M;
    for(int i=0;i<n;i++){
        string s; cin>>s;
        M[s]++;
        mx=max(M[s], mx);
    }
    
    for(auto x: M){
        if(x.second==mx) cout<<x.first<<endl;
    }
    return 0;
}