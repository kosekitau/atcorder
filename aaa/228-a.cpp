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
#include <numeric>

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    int s,t,x;
    cin>>s>>t>>x;
    if(s<t){
        if(s<=x && x<=t) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    else {
        if(s<=x || x<t) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}