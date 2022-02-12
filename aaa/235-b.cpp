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
#include <bitset>

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<string, string>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    int a;
    cin>>a;
    int pre=0;
    bool f=true;
    for(int i=0;i<a;i++){
        int h; cin>>h;
        if(f && pre<h) pre=h;
        else if(f && pre>=h) f=false;
    }
    cout<<pre<<endl;
    return 0;
}