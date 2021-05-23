#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
#define INF 100010

int main(){
    int n, A[INF], B[INF], C[INF];
    cin>>n;
    for(int i=1;i<=n;i++) cin>>A[i];
    for(int i=1;i<=n;i++) cin>>B[i];
    for(int i=1;i<=n;i++) cin>>C[i];
    
    ll ac[INF], bc[INF];
    memset(ac, 0, sizeof(ac));
    memset(bc, 0, sizeof(bc));
    for(int i=1;i<=n;i++) ac[A[i]]++;
    for(int i=1;i<=n;i++) bc[B[C[i]]]++;
    
    ll s=0;
    for(int i=1;i<=n;i++) s+=ac[i]*bc[i];
    cout<<s<<endl;

    return 0;
}