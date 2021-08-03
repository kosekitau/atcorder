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
    int n;
    cin>>n;
    int a[n], lst[n];
    ll s=1;
    
    for(int i=0;i<n;i++) lst[i]=0;
    
    for(int i=0;i<n;i++){
        int a; cin>>a;
        if(a==0){
            s=s*(3-lst[a])%MOD;
            lst[a]++;
        }
        else {
            s=s*(lst[a-1]-lst[a])%MOD;
            lst[a]++;
        }
    }
    cout<<s<<endl;
    return 0;
}