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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x=(a+d-1)/d;
    int y=(b+c-1)/b;
    if(x>=y) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}