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
    int v, e;
    cin>>v>>e;
    ll D[110][110];
    for(int i=0;i<v;i++) for(int j=0;j<v;j++) D[i][j]=INF;
    for(int i=0;i<e;i++){
        int s,t,d;
        cin>>s>>t>>d;
        D[s][t]=d;
    }
    for(int i=0;i<v;i++) D[i][i]=0;

    for(int k=0;k<v;k++){
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                if(D[i][k]==INF || D[k][j]==INF) continue;
                D[i][j] = min(D[i][j], D[i][k]+D[k][j]);
            }
        }
    }

    for(int i=0;i<v;i++){ 
        if(D[i][i]<0){
            cout<<"NEGATIVE CYCLE"<<endl;
            return 0;
        } 
    }
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if(D[i][j]==INF) cout<<"INF";
            else cout<<D[i][j];
            
            if(j!=v-1) cout<<' ';
        }
        cout<<endl;
    }
    return 0;
}