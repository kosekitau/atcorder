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
using P = pair<ll, ll>;
#define INF 2000000001
#define MOD 1000000007
int main(){
    int n;
    cin>>n;
    set<string> lst; 
    for(int i=0;i<n;i++){
        string s; cin>>s;
        lst.insert(s);
    }
    
    auto ls = lst.begin();
    int s=0;
    while(ls!=lst.end()){
        s++;
        ls++;
    }
    cout<<s<<endl;
    return 0;
}