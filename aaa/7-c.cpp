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
typedef pair<int, int> P;
#define INF 2100000000

int main(){
    int R, C, sx, sy, gx, gy;
    cin>>R>>C;
    cin>>sx>>sy>>gx>>gy;
    char c[R+1][C+1];
    for(int i=1;i<=R;i++) for(int j=1;j<=C;j++) cin>>c[i][j];
    
    int dx[4]={-1,0,1,0}, dy[4]={0,-1,0,1};
    int d[R+1][C+1];
    fill(d[0], d[R+1], INF);
    d[sx][sy]=0;
    queue<P> q;
    q.push(P(sx, sy));

    while(!q.empty()){
        P p = q.front(); q.pop();
        if(p.first==gx && p.second==gy) break;
        for(int i=0;i<4;i++){
            int nx=p.first+dx[i], ny=p.second+dy[i];
            if(nx>0 && R>nx && ny>0 && C>ny && c[nx][ny]=='.' && d[nx][ny]==INF){
                q.push(P(nx, ny));
                d[nx][ny]=d[p.first][p.second]+1;
            }
        }
    }
    cout<<d[gx][gy]<<endl;
    
    return 0;
}