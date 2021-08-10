#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <map>
#include <set>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000000
#define MOD 1000000007

int main(void){
    int n, k;
    cin>>n>>k;
    vector<P> lst;
    for(int i=0;i<k;i++){
        int a, b; cin>>a>>b;
        lst.push_back(make_pair(a, b));
    }
    sort(lst.begin(), lst.end(), greater<int>());
    ll dp[k];
    //if(lst[0]==k-1) for(int i=0;i<3;i++) dp[i][k-1]=3;
    //else for(int i=0;i<3;i++) dp[i][k-1]=1;
    int idx=lst[0].first;
    for(int i=k-1;i>-1;i--){
        if(i==idx){
            dp[i]=1;
        }
    }
    
    return 0;
}