#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int H, W, X, Y;
    char S[110][110];
    cin>>H>>W>>X>>Y;
    for(int i=1;i<=H;i++) for(int j=1;j<=W;j++) cin>>S[i][j];
    int c=0;
    for(int i=Y+1;i<=W;i++){
        if(S[X][i]=='#') break;
        c++;
    }
    
    for(int i=Y-1;0<i;i--){
        if(S[X][i]=='#') break;
        c++;
    }
    
    for(int i=X+1;i<=H;i++){
        if(S[i][Y]=='#') break;
        c++;
    }
    
    for(int i=X-1;0<i;i--){
        if(S[i][Y]=='#') break;
        c++;
    }

    cout<<c+1<<endl;
    return 0;
}