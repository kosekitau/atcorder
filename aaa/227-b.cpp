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
using P = pair<int, int>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    int n;
    cin>>n;
    int S[n];
    for(int i=0;i<n;i++) cin>>S[i];
    
    int cnt=0;
    for(int i=0;i<n;i++){
        bool f=false;
        for(int a=1;a<1001;a++){
            for(int b=1;b<1001;b++){
                if(S[i]==4*a*b+3*a+3*b) f=true;
            }
        }
        if(f) cnt++;
    }
    cout<<n-cnt<<endl;
    return 0;
}