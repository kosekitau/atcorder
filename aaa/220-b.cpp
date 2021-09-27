#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <set>
#include <tuple>
#include <map>

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 1000000007
#define MAX_N 10000000

int main(){
    ll k;
    string a, b;
    cin>>k;
    cin>>a>>b;
    
    ll ra=0, rb=0, kk=1;
    for(int i=a.size()-1;i>-1;i--){
        ra += (a[i]-'0')*kk;
        kk*=k;
    }
    kk=1;
    for(int i=b.size()-1;i>-1;i--){
        rb += (b[i]-'0')*kk;
        kk*=k;
    }
    cout<<ra*rb<<endl;
    return 0;
}