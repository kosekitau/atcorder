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
#define INF 2000000001
#define MOD 1000000007

int main(){
    int n, m;
    cin>>n>>m;
    bool lst[m+1];
    for(int i=1;i<=m;i++) lst[i]=false;

    for(int i=0;i<n;i++){
        int a; cin>>a;
        for(int j=1;j*j<=a;j++){
            if(a%j==0){
                lst[j]=true;
                lst[a/j]=true;
            }
        }
    }

    for(int i=2;i<=m;i++){
        if(lst[i]){
            for(int j=i+i;j<=m;j+=i) lst[j]=true;
        }
    }
    
    int s=0;
    int r[m+1];
    for(int i=1;i<=m;i++){
        if(!lst[i]){
            r[s]=i;
            s++;
        }
    }


    cout<<s<<endl;
    for(int i=0;i<s;i++) cout<<r[i]<<endl; 
    return 0;
}