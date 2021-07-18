#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <tuple>
#include <limits.h>
#include <map>

using namespace std;
using ll = long long;
typedef pair<int, int> P;
#define INF 2100000000
#define MOD 1000000007


int main(){
    int n, k;
    cin>>n>>k;
    int c[n];
    
    for(int i=0;i<n;i++) cin>>c[i];
    
    int kinds=0;
    map<int, int> cnt;
    for(int i=0;i<k;i++){
        if(cnt[c[i]]==0) kinds++;
        cnt[c[i]]++;
    }
    int r=kinds;
    for(int i=0;i<n-k;i++){
        if(cnt[c[i]]==1) kinds--;
        cnt[c[i]]--;
        if(cnt[c[i+k]]==0) kinds++;
        cnt[c[i+k]]++;
        r=max(kinds, r);
    }
    cout<<r<<endl;
    return 0;
}