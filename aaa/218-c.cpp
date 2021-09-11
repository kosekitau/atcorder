#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <set>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 1000000007

int main(){
    int n;
    cin>>n;
    vector<P> sp, tp;
    char S[n][n], T[n][n];
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++){
            cin>>S[i][j];
            if(S[i][j]=='#'){
                if(f){
                    sx=i;
                    sy=j;
                    f=false;
                }
                sp.push_back(make_pair(i, j));
            }
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++){
            cin>>T[i][j];
            if(T[i][j]=='#'){
                tp.push_back(make_pair(i, j));
            }
        }
    }

    int dx[4]={}, dy[4]={n/2, n/2, 0, 0}    
    if() cout<< <<endl;
    else cout<< <<endl;
    

    return 0;
}