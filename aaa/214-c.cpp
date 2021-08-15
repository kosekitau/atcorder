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
#define INF 2000000001
#define MOD 1000000007

int main(){
    ll n;
    cin>>n;
    ll s[n], ss[n];
    for(int i=0;i<n;i++) ss[i]=0;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    ll t[n], mt=INF;
    int idx=0;
    for(int i=0;i<n;i++) {
        cin>>t[i];
        if(mt>t[i]){
            mt=t[i];
            idx=i;
        }
    }
    
    ll r[n], sm=0;
    for(int i=0;i<n;i++) r[i]=0;
    r[idx]=t[idx];
    sm=s[idx]+t[idx];
    for(int i=1;i<n;i++){
        int ndx=(idx+i)%(n);
        if(sm>=t[ndx]){
            r[ndx]=t[ndx];
            sm=t[ndx]+s[ndx];
        }
        else{
            r[ndx]=sm;
            sm+=s[ndx];
        }
    }
    for(int i=0;i<n;i++) cout<<r[i]<<endl;
    return 0;
}