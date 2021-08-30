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
    int n;
    cin>>n;
    string s[n], t[n];
    for(int i=0;i<n;i++) cin>>s[i]>>t[i];

    bool ans=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j] && t[i]==t[j]) ans=true;
        }
    }

    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}