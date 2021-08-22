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
    ll n,k;
    cin>>n;
    
    ll r=1;
    for(k=0;;k++){
        if(r>n) break;
        r=r*2;
    }
    cout<<k-1<<endl;
    return 0;
}