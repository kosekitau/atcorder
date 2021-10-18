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
#define MOD 998244353
#define MAX_N 3001

int main(){
    string s;
    cin>>s;
    vector<string> lst;
    for(int i=0;i<s.size();i++){
        string n="";
        for(int j=0;j<s.size();j++){
            n+=s[(i+j)%s.size()];
        }
        lst.push_back(n);
    }
    sort(lst.begin(), lst.end());
    
    cout<<lst[0]<<endl;
    cout<<lst[s.size()-1]<<endl;
    return 0;
}