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
#include <bitset>

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<string, string>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

string toBinary(ll n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}

int main(){
    ll n;
    cin>>n;
    string a=toBinary(n);
    string s="";
    for(int i=0;i<a.size();i++){
        if(a[i]=='1')s+='2';
        else s+='0';
    }
    reverse(s.begin(), s.end());
    
    bool f=false;
    for(int i=0;i<s.size();i++){
        if(s[i]=='2') {
            if(!f) f=true;
            cout<<s[i];
        }
        else if(f) cout<<s[i];
        
    }
    cout<<endl;
    return 0;
}