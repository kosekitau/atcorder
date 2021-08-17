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
    int idx=0, pre, sum[n];
    for(int i=0;i<n;i++) sum[i]=0;

    cin>>pre;
    sum[idx]++;
    for(int i=1;i<n;i++) {
        int a; cin>>a;
        if(pre!=a){
            sum[idx]++;
        }
        else{
            idx++;
            sum[idx]++;
        }
        pre=a;
    }

    
    int s=sum[0];
    int lim=min(3, idx+1);
    for(int i=0;i<idx;i++){
        int r=0;
        for(int j=0;j<lim;j++){
            r+=sum[i+j];
        }
        s=max(r, s);
    }
    cout<<s<<endl;
    return 0;
}