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
#include <map>

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 3001

int n;
double X[310], Y[310];


int main(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>X[i]>>Y[i];

    ll cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                double d1;
                if(X[j]-X[i]==0 || Y[j]-Y[i]==0) d1=0;
                else d1=abs((Y[j]-Y[i])/(X[j]-X[i]));
                double d2;
                if(X[k]-X[j]==0 || Y[k]-Y[j]==0) d2=0;
                else d2=abs((Y[k]-Y[j])/(X[k]-X[j]));
                double d3;
                if(X[i]-X[k]==0 || Y[i]-Y[k]==0) d3=0;
                else d3=abs((Y[i]-Y[k])/(X[i]-X[k]));

                if(d1==d2 && d2==d3 && d3==d1) continue;
                else cnt++;
                
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}