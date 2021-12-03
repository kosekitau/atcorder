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
    ll n, y;
    cin>>n>>y;
    
    ll i, j, k;
    for(i=0;i<=n;i++){
        for(j=0;i+j<=n;j++){
            k=(y-(10000*i+5000*j))/1000;
            if(k>=0 && i+j+k==n && y==10000*i+5000*j+1000*k) {
                cout<<i<<' '<<j<<' '<<k<<endl;
                return 0;
            }
        }
    }

    cout<<-1<<' '<<-1<<' '<<-1<<endl;
    return 0;
}