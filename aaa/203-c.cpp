#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;

int main(){
    ll n,k;
    vector<pair<ll, ll> > event;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        event.push_back(make_pair(a,b));
    }
    sort(event.begin(), event.end());

    ll r=k;
    for(int i=0;i<n;i++){
        ll vil = event[i].first;
        ll mon = event[i].second;
        if(r>=vil){
            r=r+mon;
        }
        else{
            break;
        }
    }
    cout<<r<<endl;
    return 0;
}