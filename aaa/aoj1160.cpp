#include <iostream>
#include <cstring>
#include <algorithm>
#include <functional>
#include <stack>
#include <queue>
#include <map>
#include <set>
using namespace std;

vector<vector<int> > field;
int dx[8]={1,1,0,-1,-1,-1,0,1}, dy[8]={0,-1,-1,-1,0,1,1,1};
int H, W;

void dfs(int h, int w){
    field[h][w]=0;
    for(int i=0;i<8;i++){
        int next_h=h+dx[i];
        int next_w=w+dy[i];
        if(next_w>=W || next_w<0 || next_h>=H || next_h<0) continue;
        if(field[next_h][next_w]==0) continue;
        dfs(next_h, next_w);
    }
}

int main(){
    while(cin>>W>>H){
        if(H==0 && W==0) break;
        field.assign(H, vector<int>(W,0));
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                cin>>field[i][j];
            }
        }

        int s=0;
        //memset(seen, 0, sizeof(seen));
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                if(field[i][j]==0) continue;
                dfs(i, j);
                s++;
            }
        }
        cout<<s<<endl;
    }
    
    return 0;
}