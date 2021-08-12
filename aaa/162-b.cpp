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
#define INF 1000000001
#define MOD 1000000007

int main(void){
    ll n;
    cin>>n;
    ll s=0;
    for(ll i=1;i<n+1;i++) if(i%5!=0 && i%3!=0) s+=i;
    cout<<s<<endl;
    return 0;
}