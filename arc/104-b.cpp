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
using Graph = vector<vector<ll> >;
using P = pair<string, string>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    int n; cin>>n;
    string s; cin>>s;

    int ans=0;
    for(int i=0;i<n;i++){
        int a=0,t=0,c=0,g=0;
        for(int j=i;j<n;j++){
            if(s[j]=='A') a++;
            else if(s[j]=='T') t++;
            else if(s[j]=='C') c++;
            else g++;
            if(a==t && c==g) ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}