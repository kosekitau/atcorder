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
    ll n, k;
    cin>>n>>k;
    if(n<k) cout<<min(n, k-n)<<endl;
    else cout<<min(  n-k*(n/k), k*(n/k+1)-n )<<endl;
    
    return 0;
}