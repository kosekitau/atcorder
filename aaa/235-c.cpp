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
#include <bitset>

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<string, string>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1000000010

int main(){
    int n, q;
    cin>>n>>q;
    map<int, vector<int>> M;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        M[a].push_back(i+1);
    }
    for(int i=0;i<q;i++){
        int x, k;
        cin>>x>>k;
        if(M.count(x)==0) {
            cout<<-1<<endl;
        }
        else {
            if(M[x].size()<k) cout<<-1<<endl;
            else cout<<M[x][k-1]<<endl;
        }
    }
    
    return 0;
}