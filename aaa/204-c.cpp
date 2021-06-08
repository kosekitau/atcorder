#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
#define MAX_A 1010

bool tmp[2010];
Graph AB;

void dfs(int n){
    if(tmp[n]) return;
    tmp[n]=true;
    for(auto x: AB[n]) dfs(x);
}

int main(){
    int n, m;
    cin>>n>>m;
    AB.resize(n);
    for(int i=0;i<m;i++){
        int a, b;
        cin>>a>>b;
        AB[a-1].push_back(b-1);
    }
    
    int s=0;
    for(int i=0;i<n;i++){
        memset(tmp, 0, sizeof(tmp));
        dfs(i);
        for(int j=0;j<n;j++) if(tmp[j]) s++;
    }

    cout<<s<<endl;
    return 0;
}