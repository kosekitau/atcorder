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
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 1000000007
#define MAX_N 10000000

int main(){
    int n;
    cin>>n;
    bool f=true;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        if(a%2==0){
            if(a%3!=0 && a%5!=0) f=false;
        }
    }
    if(f) cout<<"APPROVED"<<endl;
    else cout<<"DENIED"<<endl;
    return 0;
}