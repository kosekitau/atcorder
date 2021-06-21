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
#define INF 1000000000

int main(){
    int n, A[300010];
    cin>>n;
    for(int i=0;i<n;i++) cin>>A[i];
    sort(A, A+n);

    ll c=1;
    ll s=0;
    for(int i=0;i<n-1;i++){
        if(A[i]==A[i+1]){
            c++;
            continue;
        }
        else{
            s+=c*(n-(i+1));
            c=1;
        }
    }
    cout<<s<<endl;
    return 0;
}