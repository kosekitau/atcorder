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
using P = pair<ll, ll>;
#define INF 2000000001
#define MOD 1000000007
int main(){
    int s, w;
    cin>>s>>w;
    if(w>=s) cout<<"unsafe"<<endl;
    else cout<<"safe"<<endl;
    return 0;
}