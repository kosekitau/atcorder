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
    
    int l=(s.length()-1)/2;
    int r=(s.length()+3)/2;
    bool f=true;
    for(int i=0;i<l;i++) if(s[i]!=s[l-(i+1)]) f=false;
    for(int i=0;i<l;i++) if(s[i+r-1]!=s[s.length()-(i+1)]) f=false;
    if(f) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}