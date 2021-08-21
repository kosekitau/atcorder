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
using P = pair<int, int>;
#define INF 2000000001
#define MOD 1000000007

int main(){
    int n, m;
    cin>>n>>m;
    int nxy[n][3], mxy[n][2];
    for(int i=0;i<n;i++){
        cin>>nxy[i][0]>>nxy[i][1]>>nxy[i][2];
    }
    for(int i=0;i<n;i++){
        cin>>mxy[i][0]>>mxy[i][1];
    }
    
    sort(nxy, nxy+n);
    sort(mxy, mxy+m);

    for(int i=0;i<n+m;i++) 
        for(int j=i+1;j<n+m;j++){

        }
    }

    return 0;
}