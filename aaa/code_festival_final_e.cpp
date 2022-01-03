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
using P = pair<string, string>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    int n;
    cin>>n;
    int r[n];
    for(int i=0;i<n;i++) cin>>r[i];

    int pre=r[0];
    int cnt1=1;
    bool b=true;
    for(int i=1;i<n;i++) {
        if(b && pre>r[i]) {
            cnt1++;
            b=false;
        }
        else if(!b && pre<r[i]) {
            cnt1++;
            b=true;
        }
        pre=r[i];
    }

    pre=r[0];
    int cnt2=1;
    b=false;
    for(int i=1;i<n;i++) {
        if(b && pre>r[i]) {
            cnt2++;
            b=false;
        }
        else if(!b && pre<r[i]) {
            cnt2++;
            b=true;
        }
        pre=r[i];
    }
    int ans=max(cnt1, cnt2);
    if(ans<3) cout<<0<<endl;
    else cout<<ans<<endl;
    return 0;
}