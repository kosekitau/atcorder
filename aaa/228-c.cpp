#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <set>
#include <tuple>
#include <map>
#include <numeric>

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    int n, k;
    cin>>n>>k;
    int P[n], sp[n];
    for(int i=0;i<n;i++) {
        int s=0;
        for(int j=0;j<3;j++) {
            int a;cin>>a;
            s+=a;
        }
        P[i]=s;
        sp[i]=s;
    }
    sort(sp, sp+n, greater<int>());
    int lim = sp[k-1];

    for(int i=0;i<n;i++) {
        if(lim<=P[i]+300) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    
    return 0;
}