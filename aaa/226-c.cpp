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
using P = pair<ll, ll>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    ll n; cin>>n;
    ll T[n];
    int lst[n];
    Graph A(n);
    ll ans=0;
    
    for(int i=0;i<n;i++){
        cin>>T[i];
        int k; cin>>k;
        for(int j=0;j<k;j++){
            int a; cin>>a;
            a--;
            A[i].push_back(a);
        }
    }
    for(int i=0;i<n;i++) lst[i]=0;
    

    lst[n-1]=1;
    for(int i=n-1;i>-1;i--){
        if(lst[i]){
            ans+=T[i];
            for(auto x: A[i]) lst[x]=1;
        }
    }

    cout<<ans<<endl;

    return 0;
}