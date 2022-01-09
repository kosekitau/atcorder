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
    string s; cin>>s;
    int lst[26];
    for(int i=0;i<26;i++)  lst[i]=0;
    for(int i=0;i<s.size();i++)  lst[s[i]-'a']++;   
    
    char ans='#';
    for(int i=0;i<26;i++){
        if(lst[i]==0){
            ans='a'+i;
            break;
        }
    }
    if(ans=='#') cout<<"None"<<endl;
    else cout<<ans<<endl;
    return 0;
}