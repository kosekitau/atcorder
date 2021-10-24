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
    int h, w;
    cin>>h>>w;
    ll A[h][w];
    for(int i=0;i<h;i++) for(int j=0;j<w;j++) cin>>A[i][j];

    bool f=true;

    for(int i=0;i<h-1;i++) {
        for(int j=i+1;j<h;j++) {
            for(int k=0;k<w-1;k++){
                for(int l=k+1;l<w;l++){
                    if(A[i][k]+A[j][l]>A[j][k]+A[i][l]) f=false;
                }
            }
        }
    }

    if(f) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}