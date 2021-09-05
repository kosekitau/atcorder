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

bool comp(string s){
    string t(s.rbegin(),s.rend());
    return s==t;
}

int main(){
    string s;
    cin>>s;
    
    int l=(s.length()-1)/2;
    int r=(s.length()+1)/2;
    
    if( comp(s.substr(0,l)) && comp(s.substr(r)) && comp(s)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}