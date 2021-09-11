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
    int p[26];
    for(int i=0;i<26;i++) cin>>p[i];
    
    for(int i=0;i<26;i++){
        char a='a';
        a+=(p[i]-1);
        cout<<a;
    }
    cout<<endl;

    return 0;
}