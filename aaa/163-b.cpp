#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <map>
#include <set>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 1000000000000001
#define MOD 1000000007

int main(void){
    ll n, m, s=0;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a; cin>>a;
        s+=a;
    }
    if(n-s>=0) cout<<n-s<<endl;
    else cout<<-1<<endl;
    return 0;
}