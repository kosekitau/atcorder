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
#define INF 2000000000

int main(){
    int n;
    cin>>n;
    if((int)(n*1.08) < 206) cout<<"Yay!"<<endl;
    else if((int)(n*1.08) == 206) cout<<"so-so"<<endl;
    else cout<<":("<<endl;
    return 0;
}