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
    int n;
    cin>>n;
    priority_queue<int, vector<int>, greater<int>> A, B, C;
    for(int i=0;i<n;i++) {
        int a; cin>>a;
        A.push(a);
    }
    for(int i=0;i<n;i++) {
        int a; cin>>a;
        B.push(a);
    }
    for(int i=0;i<n;i++) {
        int a; cin>>a;
        C.push(a);
    }
    
    int ans=0;
    while(!A.empty() && !B.empty() && !C.empty()){
        int a=A.top(), b=B.top(), c=C.top();
        if(a<b && b<c){
            ans++;
            A.pop(); B.pop(); C.pop();
        }
        if(b>=c){
            C.pop();
        }
        if(a>=b){
            B.pop();
        }
    }
    cout<<ans<<endl;

    return 0;
}