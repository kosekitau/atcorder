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
    priority_queue<P, vector<P>, greater<P>> d;
    P que[Q+10];
    for(int i=1;i<Q+1;i++){
        int q; cin>>q;
        if(q==1){
            ll j; cin>>j;
            que[i]=make_pair(q, j);
        }
        else if(q==2){
            ll x; cin>>x;
            que[i]=make_pair(q, x);
        }
        else{
            que[i]=make_pair(q, 0);
        }
    }

    ll dx=0, cnt[Q+10];
    for(int i=0;i<Q+10;i++) cnt[i]=0;
    cnt[Q+1]=0;
    for(int i=Q;i>0;i--){
        cnt[i]+=cnt[i+1];
        if(que[Q-i+1].first==2){
            cnt[i]+=que[Q-i+1].second;
        }
        cout<<i<<": "<<cnt[i]<<endl;
    }
    for(ll i=1;i<Q+1;i++){
        if(que[i].first==1){
            d.push(make_pair(que[i].second, i));
        }
        else if(que[i].first==2){
            continue;
        }
        else{
            P z=d.top();
            d.pop();
            cout<<z.first+cnt[z.second]<<endl;
        }
    }
    return 0;
}