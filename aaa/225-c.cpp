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

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 3001

int main(){
    int n, m;
    cin>>n>>m;
    int B[n][m];
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>B[i][j];

    bool f=true;

    for(int j=0;j<m;j++){
        int pre=B[0][j];
        for(int i=1;i<n;i++){
            if(pre+7!=B[i][j]) f=false;
            pre=B[i][j];
        }
    }

    for(int i=0;i<n;i++){
        int pre=B[i][0];
        int se=(B[i][0]-1)/7;
        for(int j=1;j<m;j++){
            if(pre+1!=B[i][j] || B[i][j]>se*7+7) f=false;
            pre=B[i][j];
        }
    }
    if(f) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}