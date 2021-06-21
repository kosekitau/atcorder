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
#define INF 2000000000

int main(){
    ll n;
    cin>>n;
    ll i=1, s=0;
    while(1){
        s+=i;
        if(s>=n) break;
        i++;
    }
    cout<<i<<endl;
    return 0;
}