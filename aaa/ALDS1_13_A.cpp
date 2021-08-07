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
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000001
#define MOD 1000000007

int r, c;
int table[8][8];
int dx[4]={-1,1,1,-1}, dy[4]={1,1,-1,-1};

bool check(int y, int x){
    if(table[y][x]) return false;
    table[y][x]=1;
    for(int i=0;i<4;i++){
        int nx=x, ny=y;
        for(int j=0;;j++){
            nx+=dx[i], ny+=dy[i];
            if(nx<0 || ny<0 || nx>7 || ny>7) break;
            table[ny][nx]=1;
        }
    }
    return true; 
}

int main(){
    int k;
    cin>>k;
    for(int i=0;i<8;i++) for(int j=0;j<8;j++) table[i][j]=0;

    int m[8],R[8];
    for(int i=0;i<k;i++){
        int r, c; cin>>r>>c;
        m[r]=c; R[i]=r;
    } 

    int a[8];
    for(int i=0;i<8;i++) a[i]=i;


    do{
        for(int i=0;i<8;i++) for(int j=0;j<8;j++) table[i][j]=0;
        bool f=true;
        for(int i=0;i<k;i++) if(m[R[i]]!=a[R[i]]) f=false;
        for(int i=0;i<8;i++) if(!check(i, a[i])) f=false;
        if(f) {
            for(int i=0;i<8;i++){
                for(int j=0;j<8;j++){
                    if(j==a[i]) cout<<'Q';
                    else cout<<'.';
                }    
                cout<<endl;
            }
            break;
        }
    }while(next_permutation(a, a+8));
    return 0;
}