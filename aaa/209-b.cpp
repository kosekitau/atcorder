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
    int n, x;
    cin>>n>>x;
    
    int s=0;
    for(int i=1;i<=n;i++){
        int a; cin>>a;
        if(i%2) s+=a;
        else s+=a-1;
    }
    if(x>=s) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}