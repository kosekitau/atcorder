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
#define INF 100010
#define MOD 1000000007


int main(){
    int n, m;
    cin>>n>>m;
    int lst[INF];
    for(int i=1;i<INF;i++) lst[i]=0;

    for(int i=0;i<n;i++){
        int a; cin>>a;
        lst[a]=1;
        for(int j=1;j*j<=a;j++){
            if(a%j==0){
                lst[j]=1;
                lst[a/j]=1;
            }
        }
    }
    int s=0;
    int r[INF];
    for(int i=1;i<=m;i++){
        bool f=true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                if(lst[j] || lst[i/j]) {
                    f=false;
                    break;
                }
            }
        }
        if(lst[i] && i!=1) f=false;
        if(f){
            r[s]=i;
            s++;
        }
    }
    cout<<s<<endl;
    for(int i=0;i<s;i++) cout<<r[i]<<endl; 
    return 0;
}