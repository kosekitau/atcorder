#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <map>
#include <set>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 1000000001
#define MOD 1000000007

int main(void){
    string n;
    cin>>n;
    bool f=false;
    for(int i=0;i<n.length();i++) if(n[i]=='7') f=true;
    if(f) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}