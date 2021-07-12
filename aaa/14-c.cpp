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
#define INF 1000010

int main(){
    int n;
    cin>>n;
    ll table[INF];

    for(int i=0;i<INF;i++) table[i]=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        table[a]++;
        table[b+1]--;
    }
    for(int i=0;i<INF;i++){
        if(0<i) table[i]+=table[i-1];
    }

    ll s=0;
    for(int i=0;i<INF;i++){
        s=max(s, table[i]);
    }
    cout<<s<<endl;
    return 0;
}