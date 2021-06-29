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
#define INF 1000000000

int main(){
    int n;
    cin>>n;
    ll LR[2020][2];
    for(int i=0;i<n;i++){
        ll t,l,r;
        cin>>t>>l>>r;
        if(t==1){
            LR[i][0]=l*10;
            LR[i][1]=r*10;
        }
        else if(t==2){
            LR[i][0]=l*10;
            LR[i][1]=r*10-1;
        }
        else if(t==3){
            LR[i][0]=l*10+1;
            LR[i][1]=r*10;
        }
        else{
            LR[i][0]=l*10+1;
            LR[i][1]=r*10-1;
        }
    }
    ll s=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if( ( LR[i][1]>=LR[j][0] && LR[j][0]>=LR[i][0] ) || ( LR[j][1]>=LR[i][0] && LR[i][0]>=LR[j][0] )) s++;
            
        }
    }
    cout<<s<<endl;
    return 0;
}