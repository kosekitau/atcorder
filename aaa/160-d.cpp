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
#define INF 2000000003
#define MOD 1000000007

int main(){
    int n, x, y;
    cin>>n>>x>>y;
    
    int r[n];
    for(int i=0;i<n;i++) r[i]=0;

    for(int i=1;i<n;i++) {
        for(int j=i+1;j<=n;j++){
            int dim = min(j-i, abs(x-i)+abs(j-y)+1);
            r[dim]++;
        }
    }

    for(int i=1;i<n;i++) cout<<r[i]<<endl;
    return 0;
}