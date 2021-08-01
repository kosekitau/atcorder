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
using P = pair<ll, ll>;
#define INF 2000000001
#define MOD 1000000007
int main(){
    ll Q;
    cin>>Q;
    priority_queue<ll, vector<ll>, greater<ll>> d;
    
    ll dx=0;
    for(ll i=1;i<Q+1;i++){
        int q; cin>>q;
        if(q==1){
            ll x; cin>>x;
            d.push(x-dx);
        }
        else if(q==2){
            ll x; cin>>x;
            dx+=x;
        }
        else{
            ll y=d.top();
            d.pop();
            cout<<y+dx<<endl;
        }
    }
    return 0;
}