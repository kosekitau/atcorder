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
using P = pair<string, string>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    string s;
    cin>>s;
    
    int ans=s.size();
    set<char> st;
    for(int i=0;i<s.size();i++){
        st.insert(s[i]);
    }
    if(st.size()==ans) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    return 0;
}