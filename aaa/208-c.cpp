#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <tuple>
#include <limits.h>

using namespace std;
using ll = long long;
#define INF 2100000000

int main(){
    ll n, k;
    cin>>n>>k;
    ll a[n], c[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        c[i]=a[i];
    }

    sort(c, c+n);
    ll nk = k/n;
    ll ix = c[k%n]-1;
    for(int i=0;i<n;i++){
        if(a[i]<=ix){
            cout<<nk+1<<endl;
        }
        else{
            cout<<nk<<endl;
        }
    }

    return 0;
}