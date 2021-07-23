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
    int k,a,b;
    cin>>k>>a>>b;
    for(int i=1;i*k<=b;i++){
        if(a<=k*i && k*i<=b){
            cout<<"OK"<<endl;
            return 0;
        }
    }
    cout<<"NG"<<endl;
    return 0;
}