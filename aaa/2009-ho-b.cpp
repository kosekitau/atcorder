//https://www.ioi-jp.org/joi/2008/2009-ho-prob_and_sol/2009-ho.pdf#page=4

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <bitset>
#include <math.h>
using namespace std;
using ll = long long;
int main(){
    int d, n, m;
    int D[100010], k[10010];
    cin>>d>>n>>m;
    D[0]=0;
    for(int i=1;i<n;i++) cin>>D[i];
    for(int i=0;i<m;i++) cin>>k[i];

    sort(D, D+n);
    D[n++]=d;
    ll s=0;
    for(int i=0;i<m;i++){
        int idx=lower_bound(D, D+n, k[i]) - D;
        int dis=min(abs(k[i]-D[idx]), abs(D[idx-1]-k[i]));
        s+=dis;
    }
    cout<<s<<endl;
    return 0;
}