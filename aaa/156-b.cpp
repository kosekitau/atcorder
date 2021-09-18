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
    int n, k;
    cin>>n>>k;
    
    int cnt=0;
    while(n>0){
        n/=k;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}