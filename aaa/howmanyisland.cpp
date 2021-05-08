//https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1160&lang=jp

#include <iostream>
#include <cstdio>
#include <queue>
#define INF 1000000000

using namespace std;

int w,h,s;
int c[60][60];
int dx[8]={1,1,0,-1,-1,-1,0,1}, dy[8]={0,-1,-1,-1,0,1,1,1};

void dfs(int x, int y){
    int nx, ny;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            nx=x+dx[i]; ny=y+dy[i];
            if(nx>=0 && h>nx && ny>=0 && w>ny && c[nx][ny]==1){
                c[nx][ny]=0;
                dfs(nx, ny);
            }
        }
    }
    return ;
}

int main(){
    while(cin>>w>>h){
        if(w==0 && h==0) break;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                cin>>c[i][j];
            }
        }

        int s=0;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(c[i][j]==1){
                    dfs(i, j);
                    s++;
                }

            }
        }
        cout<<s<<endl;
    }


    return 0;
}