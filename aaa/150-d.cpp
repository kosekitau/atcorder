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
int gcd(int a, int b){
    if(a<b) return gcd(b, a);
    int r;
    while((r=a%b)){
        a=b;
        b=r;
    }
    return b;
}
int lcm(int a, int b){
  return a*b / gcd(a, b);
}
int main(){
    int n, m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]/=2;
    }
    ll lc=1;
    for(int i=0;i<n;i++) lc=lcm(lc, a[i]);
    
    for(int i=0;i<n;i++){
        if((lc/a[i])%2==0){
            cout<<0<<endl;
            return 0;
        }
    }
    cout<<(m/lc+1)/2<<endl;
    return 0;
}