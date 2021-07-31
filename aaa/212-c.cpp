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
    int n, m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    sort(b, b+m);

    int r=INF;
    for(int i=0;i<n;i++){
        int idx;
        idx = lower_bound(b, b+m, a[i])-b;
        if(idx!=m){
            r=min(r, abs(b[idx]-a[i]));
        }
        if(idx!=0){
            r=min(r, abs(b[idx-1]-a[i]));
        }
    }
    cout<<r<<endl;
    return 0;
}