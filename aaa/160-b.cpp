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
#define INF 2000000003
#define MOD 1000000007

int main(){
    int x;
    cin>>x;
    int a=x/500;
    int b=(x-a*500)/5;
    cout<<a*1000+b*5<<endl; 
    return 0;
}