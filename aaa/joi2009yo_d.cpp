//https://atcoder.jp/contests/joi2009yo/tasks/joi2009yo_d
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int dx[4]={1,0,-1,0}, dy[4]={0,-1,0,1};
int ice[100][100];
int cice[100][100];
int m, n, mxs=0;

void dfs(int x, int y, int s){
    int r=s+1, a;
    cice[x][y]=1;
    
    for(int i=0;i<4;i++){
        int nx=x+dx[i], ny=y+dy[i];
        if(ice[nx][ny]==1 && nx>=0 && n>nx && ny>=0 && m>ny && cice[nx][ny]==0){
            dfs(nx, ny, r);
        }
    }
    cice[x][y]=0;
    mxs=max(mxs, r);
    return ;
}

int main(){
    cin>>m>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ice[i][j];
        }
    }
    int s=0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(ice[i][j]==1){
                memset(cice, 0, sizeof(cice));
                dfs(i, j, 0);
            }
        }
    }
    

    cout<<mxs<<endl;
    return 0;
}