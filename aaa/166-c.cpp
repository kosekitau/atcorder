#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <tuple>
#include<cmath>
#include<iomanip>

using namespace std;
using ll = long long;
typedef pair<int, int> P;
#define INF 2100000000
#define MOD 1000000007


int main(){
    int n,m;
    cin>>n>>m;
    int H[n];
    for(int i=0;i<n;i++) cin>>H[i];
    int N[n];
    fill(N, N+n, 0);
    for(int i=0;i<m;i++){
        int a,b; cin>>a>>b; a--; b--;
        if(H[a]>H[b]) N[b]--;
        else if(H[a]<H[b])N[a]--;
        else{
            N[a]--;
            N[b]--;
        }
    }

    int s=0;
    for(int i=0;i<n;i++)
        if(N[i]==0) s++;
    cout<<s<<endl;

    return 0;
}