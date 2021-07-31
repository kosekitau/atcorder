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
    int rc, a[n], idx=0;
    cin>>rc;
    a[idx]=1;
    for(int i=2;i<=n;i++){
        int c; cin>>c;
        if(i%2){
            if(c==rc){
                a[idx]++;
                rc=c;
            }
            else{
                idx++;
                a[idx]=1;
                rc=c;
            }
        }
        else{
            if(c==rc){
                a[idx]++;
            }
            else{
                a[idx]++;
                rc=(rc+1)%2;
            }
        }
    }
    for(int i=0;i<=idx;i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
    return 0;
}