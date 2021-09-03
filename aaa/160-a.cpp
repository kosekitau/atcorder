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
    string s;
    cin>>s;
    if(s[2]==s[3] && s[4]==s[5]) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}