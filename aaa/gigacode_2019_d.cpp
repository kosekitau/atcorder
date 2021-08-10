#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <map>
#include <set>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 1000000000000001
#define MOD 1000000007

int main(void){
    ll H, W, K, V;
    cin>>H>>W>>K>>V;
    vector<vector<ll> > A(H, vector<ll>(W));
    for(ll i=0;i<H;i++) for(ll j=0;j<W;j++) cin>>A[i][j];

    vector<vector<ll> > mA(H+1, vector<ll>(W+1, 0));
    for(ll i=0;i<H;i++){
        for(ll j=0;j<W;j++){
            mA[i+1][j+1]=mA[i][j+1]+mA[i+1][j]-mA[i][j]+A[i][j];
        }
    }

    ll r=0;
    for(ll i=0;i<H;i++){
        for(ll j=0;j<W;j++){
            for(ll k=1+i;k<=H;k++){
                for(ll l=1+j;l<=W;l++){
                    ll s=mA[k][l]-mA[k-i-1][l]-mA[k][l-j-1]+mA[k-i-1][l-j-1] + (K*(i+1)*(j+1)); 
                    if(s<=V) r=max(r, (i+1)*(j+1));
                }
            }
        }
    }
    cout<<r<<endl;
    return 0;
}