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
#define INF 1000000000000001
#define MOD 1000000007

int main(void){
    int n;
    cin>>n;
    ll A[n], sa[n+1];
    for(int i=0;i<n-1;i++) cin>>A[i];
    for(int i=1;i<n+1;i++) sa[i]=0;
    for(int i=0;i<n-1;i++) sa[A[i]]++;
    for(int i=1;i<n+1;i++) cout<<sa[i]<<endl;
    
    return 0;
}