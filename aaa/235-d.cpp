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
#define MAX_N 1000000010

int main(){
    ll a, N;
    cin>>a>>N;
    ll cnt=0;
    while(1){
        if(N<=10 && N%a==1) {
            cout<<-1<<endl;
            return 0;
        }
        else if(N%a==0){
            N/=a;
            cnt++;
        }
        else{
            string n;
            int idx=1;
            for(i=0;i<N.size();i++) n[(i+idx)%N.size()]
        }
    }
    
    return 0;
}