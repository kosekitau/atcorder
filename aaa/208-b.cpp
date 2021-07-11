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

using namespace std;
using ll = long long;
#define INF 2100000000

int main(){
    int p;
    cin>>p;
    ll cn[20]; cn[0]=1;
    for(int i=1;i<11;i++) cn[i] = cn[i-1]*i;
    
    int s=0;
    for(int i=10;i>0;i--){
        if(p==0) break;
        if(cn[i]<=p){
            s+=p/cn[i];
            p=p-p/cn[i]*cn[i];
        }
    }
    cout<<s<<endl;
    return 0;
}