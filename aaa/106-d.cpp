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
    int n, m, q;
    cin>>n>>m>>q;
    int lst[555][555];
    for(int i=0;i<m;i++){
        int l, r;
        cin>>l>>r;
        lst[l][r]++;
    }

    for(int i=1;i<n+1;i++){
        for(int j=2;j<n+1;j++){
            lst[i][j]+=lst[i][j-1];
        }
    }

    for(int i=0;i<q;i++){
        int p, q, r=0;
        cin>>p>>q;
        for(int j=p;j<q+1;j++) r+=lst[j][q];
        cout<<r<<endl;
    }
    return 0;
}