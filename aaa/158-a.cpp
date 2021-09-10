#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <set>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 1000000007

int main(){
    string s;
    cin>>s;
    if(s[0]==s[1] && s[1]==s[2]) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;
}