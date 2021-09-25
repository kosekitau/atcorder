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
    int n;
    cin>>n;
    set<int> Set;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        Set.insert(a);
    }
    if(Set.size()!=n) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    return 0;
}