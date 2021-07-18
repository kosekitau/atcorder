#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <tuple>
#include <limits.h>
#include <map>

using namespace std;
using ll = long long;
typedef pair<int, int> P;
#define INF 2100000000
#define MOD 1000000007


int main(){
    int n, k;
    cin>>n>>k;
    int c[n];
    int road[n];
    map<int,int> count; 
    for(int i=0;i<n;i++) count[i]=0;
    
    int m=1;
    for(int i=0;i<n;i++){
        cin>>c[i];
        if(count[c[i]]!=m){
            count[c[i]]=m;
            road[i]=m;
        }
        else {
            m++;
            count[c[i]]=m;
            road[i]=m;
        }
    }
    int a=1, s=0, idx=road[0];
    for(int i=1;i<n;i++){
        if(road[i]==idx){
            a++;
        }
        else{
            s=max(s,a);
            idx=road[i];
            a=1;
        }
    }
    for(int i=0;i<n;i++) cout<<road[i]<<' ';
    cout<<endl;
    cout<<min(s, k)<<endl;
    return 0;
}