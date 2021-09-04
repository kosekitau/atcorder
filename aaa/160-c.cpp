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
    int k, n;
    cin>>k>>n;
    
    int A[n];
    for(int i=0;i<n;i++) cin>>A[i];

    int dim=0;
    for(int i=0;i<n-1;i++){
        int d=A[i+1]-A[i];
        dim=max(dim, d);
    }
    dim=max(dim, k-A[n-1]+A[0]);
    cout<<k-dim<<endl;
    return 0;
}