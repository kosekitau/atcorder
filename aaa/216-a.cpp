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
    double n;
    cin>>n;

    double k=n-floor(n);
    cout<<k<<endl;
    if(k>=0 && 0.2>=k) cout<<floor(n)<<'-'<<endl;
    else if(k>=0.3 && 0.6>=k) cout<<floor(n)<<endl;
    else cout<<floor(n)<<'+'<<endl;
    return 0;
}