#include <iostream>
#include <vector>
using namespace std;
int dx[4]={1,0,-1,0}, dy[4]={0,-1,0,1};
int ice[100][100];
int m, n;

int dfs(int x, int y, int s){
    int r=s+1;
    ice[x][y]=0;
    for(int i=0;i<4;i++){
        int nx=x+dx[i], ny=y+dy[i];
        if(ice[nx][ny]==1 && nx>=0 && m>nx && ny>=0 && n>ny){
            r=max(r, dfs(nx, ny, r));
        }
    }
    ice[x][y]=1;
    return r;
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
                s=max(s, dfs(i, j, 0));
            }
        }
    }
    
    cout<<s<<endl;
    return 0;
}