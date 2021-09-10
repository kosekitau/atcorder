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
    ll a, b;
    cin>>a>>b;
    
    a*=100; b*=100;
    for(ll i=1;i<2000;i++){
        ll A, B;
        A=i*8; B=i*10;
        if(a<=A && A<a+100 && b<=B && B<b+100){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}