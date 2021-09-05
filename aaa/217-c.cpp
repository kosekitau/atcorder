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
#define INF 2000000003
#define MOD 1000000007

int main(){
    int n;
    cin>>n;
    int p[n+1];
    for(int i=1;i<=n;i++){
        cin>>p[i];
    }

    int q[n+1];
    for(int i=1;i<=n;i++){
        q[p[i]]=i;
    }

    for(int i=1;i<=n;i++){
        if(i!=1)cout<<' ';
        cout<<q[i];
    }
    cout<<endl;
    return 0;
}