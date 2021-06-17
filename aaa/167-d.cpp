#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
#define MAX_A 1010

int main(){
    ll n,k;
    cin>>n>>k;
    
    int next[60][n];
    for(int v=0;v<n;v++){
        cin>>next[0][v];
        next[0][v]--;
    }

    for(int d=0;d+1<60;d++){
        for(int v=0;v<n;v++){
            next[d+1][v]=next[d][next[d][v]];
        }
    }

    int v=0;
    for(int d=0;d<60;d++){
        if(k & (1LL<<d)){
            v=next[d][v];
        }
    }
    cout<<v+1<<endl;
    return 0;
}