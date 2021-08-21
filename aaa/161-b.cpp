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
    int s=0, A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
        s+=A[i];
    }
    
    double lim=(double)s/(4*m);
    int r=0;
    for(int i=0;i<n;i++){
        if(A[i]>=lim){
            r++;
        }
    }
    if(r>=m) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}