#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <tuple>
#include <cmath>
#include <iomanip>

using namespace std;
using ll = long long;
typedef pair<int, int> P;
#define INF 2100000000
#define MOD 1000000007

vector<int> per;
int a[55], b[55], c[55], d[55];
int n, m, q, r=0;
void dfs(int depth, int size, int mn, int mx){
    if(depth==size){
        int s=0;
        //for(int i=0;i<n;i++) cout<<per[i];
        //cout<<endl;
        for(int i=0;i<q;i++)
            if(per[b[i]]-per[a[i]]==c[i]) s+=d[i];
        r=max(r, s);
    }
    else{
        for(int i=mn;i<=mx;i++){
            per[depth]=i;
            dfs(depth+1, size, i, mx);
        }
    }
}

int main(){
    cin>>n>>m>>q;
    per.resize(n);
    for(int i=0;i<q;i++){
        cin>>a[i]>>b[i]>>c[i]>>d[i];
        a[i]--; b[i]--;
    }
    dfs(0, n, 1, m);
    cout<<r<<endl;
    
    return 0;
}