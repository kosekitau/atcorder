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
    int n;
    cin>>n;
    if(1<=n && n<=125) cout<<4<<endl;
    else if(126<=n && n<=211) cout<<6<<endl;
    else cout<<8<<endl;
    return 0;
}