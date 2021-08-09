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
using P = pair<int, int>;
#define INF 2000000000
#define MOD 1000000007

int main(void){
    int a, b;
    cin>>a>>b;
    int c=(a&b);
    int lm=sqrt(max(a, b))+1;
    int s=0;
    for(int i=0;i<lm;i++){
        if((a&(1<<i)) != (b&(1<<i))) s+=(1<<i);
    }
    cout<<s<<endl;
    return 0;
}