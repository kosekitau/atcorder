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
    int n,k,d;
    cin>>n>>k;
    int N[n];
    
    fill(N, N+n, 0);
    for(int i=0;i<k;i++){
        int d; cin>>d;
        for(int j=0;j<d;j++){
            int a; cin>>a;
            N[a-1]++;
        }
    }

    int s=0;
    for(int i=0;i<n;i++)
        if(N[i]==0) s++;
    cout<<s<<endl;

    return 0;
}