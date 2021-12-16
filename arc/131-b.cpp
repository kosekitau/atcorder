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
#include <numeric>

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<string, string>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    int h, w;
    cin>>h>>w;
    
    int lst[5] = {1,2,3,4,5};
    int dj[4]={1,0,-1,0}, di[4]={0,-1,0,1};
    int c[h][w];
    for(int i=0;i<h;i++) for(int j=0;j<w;j++) {
        char cc; cin>>cc;
        if(cc=='.') c[i][j]=0;
        else c[i][j]=cc-'0';
    }    
    
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(c[i][j]==0){
                for(int k=0;k<5;k++) lst[k]=k+1;
                for(int k=0;k<4;k++){
                    int ni=i+di[k], nj=j+dj[k];
                    if(h>ni && ni>=0 && w>nj && nj>=0 && c[ni][nj]!=0){
                        int idx=c[ni][nj];
                        lst[idx-1]=0;
                    }  
                }
                for(int k=0;k<5;k++) {
                    if(lst[k]!=0) {
                        c[i][j]=lst[k];
                        break;
                    }
                }
            }
        }
    }

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout<<c[i][j];
        }
        cout<<endl;
    }

    return 0;
}