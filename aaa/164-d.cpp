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
    string s;
    cin>>s;
    int cnt[2020], t=0, pr=1;
    for(int i=0;i<2020;i++) cnt[i]=0;
    cnt[0]=1;
    ll r=0;
    for(int i=s.length()-1;i>-1;i--){
        t=(pr*(s[i]-'0')+t)%2019;
        r+=cnt[t];
        cnt[t]++;
        pr=(pr*10)%2019;
    }
    cout<<r<<endl;
    return 0;
}