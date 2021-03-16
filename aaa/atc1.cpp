#include <iostream>
#include <cstring>
#include <algorithm>
#include <functional>
#include <stack>
#include <queue>
#include <map>
#include <set>
using namespace std;
vector <string> field;
bool seen[510][510];
int dx[4]={1,0,-1,0}, dy[4]={0,-1,0,1};

int H, W;
int sh,sw,gh,gw;

void dfs(int h, int w){
    seen[h][w]=true;
    for(int i=0;i<4;i++){
        int next_h=h+dx[i];
        int next_w=w+dy[i];
        if(next_w>=W || next_w<0 || next_h>=H || next_h<0) continue;
        if(field[next_h][next_w]=='#') continue;
        if(seen[next_h][next_w]) continue;
        dfs(next_h, next_w);
    }
}

int main(){
    cin>>H>>W;
    field.resize(H);
    for(int i=0;i<H;i++) cin>>field[i];
    
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(field[i][j]=='s') sh=i, sw=j;
            if(field[i][j]=='g') gh=i, gw=j;
        }
    }
    memset(seen, 0, sizeof(seen));
    dfs(sh, sw);
    if(seen[gh][gw]) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}