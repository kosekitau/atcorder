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
#define INF 1000000000

int main(){
    int a, b,c;
    cin>>a>>b>>c;
    cout<<max(b+c, max(a+b, a+c))<<endl;
    return 0;
}