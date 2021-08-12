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
#include <ctime>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 1000000001
#define MOD 1000000007

int gcd(int a, int b){
    if(a<b) return gcd(b, a);
    int r;
    while((r=a%b)){
        a=b;
        b=r;
    }
    return b;
}

int main(void){
    int n;
    cin>>n;
    ll s=0;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            for(int k=1;k<n+1;k++){
                s+=gcd(i, gcd(j, k));
            }
        }
    }    
    cout<<s<<endl;
    return 0;
}