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
    int n, m;
    cin>>n>>m;
    int joi[100010], d[100010], J[100010];

    for(int i=2;i<=n;i++) cin>>joi[i];
    for(int i=0;i<m;i++) cin>>d[i];

    J[2]=joi[2];
    for(int i=3;i<=n;i++) J[i]=J[i-1]+joi[i];

    ll s=0;
    int idx=1;
    for(int i=0;i<m;i++){
        s=s%100000+abs(J[idx+d[i]] - J[idx])%100000;
        idx+=d[i];
    }
    cout<<s<<endl;
    return 0;
}