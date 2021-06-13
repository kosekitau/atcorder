#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 1000000000

int main(){
    int H,W,N,s=0,n=0;
    cin>>H>>W>>N;
    char M[H][W];
    int cheese[N+1][2];
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin>>M[i][j];
            if(M[i][j]=='S'){
                cheese[0][0]=i;
                cheese[0][1]=j;
            }
            if('0'<=M[i][j] && M[i][j]<='9'){
                cheese[M[i][j]-'0'][0]=i;
                cheese[M[i][j]-'0'][1]=j;
                n++;
            }
        }
    }
    
    int di[4]={1,0,-1,0}, dj[4]={0,-1,0,1};
    for(int i=0;i<n;i++){
        queue <pair<int, int> > que;
        que.push(make_pair(cheese[i][0], cheese[i][1]));
        int dist[H][W];
        for(int a=0;a<H;a++) for(int b=0;b<W;b++) dist[a][b]=INF;
        dist[cheese[i][0]][cheese[i][1]]=0;
        while(!que.empty()){
            P p = que.front(); 
            que.pop();
            if(p.first==cheese[i+1][0] && p.second==cheese[i+1][1]) break;
            for(int j=0;j<4;j++){
                int ni=p.first+di[j], nj=p.second+dj[j];
                if(0<=ni && ni<H && 0<=nj && nj<W && M[ni][nj]!='X' && dist[ni][nj]==INF){
                    que.push(make_pair(ni, nj));
                    dist[ni][nj]=dist[p.first][p.second]+1;
                }
            }
        }
        s+=dist[cheese[i+1][0]][cheese[i+1][1]];
    }
    
    cout<<s<<endl;
    return 0;
}