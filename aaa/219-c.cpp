#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <set>
#include <map>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<string, string>;
#define INF 2000000003
#define MOD 1000000007

int main(){
    string x;
    cin>>x;
    int n;
    cin>>n;
    map<char, char> M1; 
    vector<string> S;
    for(int i=0;i<n;i++) {
        string s; cin>>s;
        S.push_back(s);
    }
    for(int i=0;i<x.size();i++){
        M1[x[i]]=(char)('a'+i);
    }
    
    vector<P> r;
    for(int i=0;i<n;i++){
        string s=S[i];
        string nw="";
        for(int j=0;j<s.size();j++){
            nw+=M1[s[j]];
        }
        r.push_back(make_pair(nw, s));
    }

    sort(r.begin(), r.end());
    for(int i=0;i<r.size();i++){
        P p=r[i];
        cout<<p.second<<endl;
    }
    return 0;
}