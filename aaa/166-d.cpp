#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <tuple>
#include<cmath>
#include<iomanip>

using namespace std;
using ll = long long;
typedef pair<int, int> P;
#define INF 2100000000
#define MOD 1000000007


int main(){
    ll x;
    cin>>x;
    for(ll i=-1000;i<1001;i++){
        for(ll j=-1000;j<1001;j++){
            if(powl(i,5)+powl(j,5)==x){
                cout<<i<<' '<<-j<<endl;
                return 0;
            }
        }
    }

    
    return 0;
}