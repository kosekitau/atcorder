#include <iostream>
using namespace std;
int h,w;
char s[10][10];
int dx[4]={-1,0,1,0}, dy[4]={0,-1,0,1};
int nx[4]={-1,1,1,-1}, ny[4]={-1,-1,1,1};

int cc(int i, int j){
    int n=0;
    for(int k=0;k<4;k++){
        if(s[i+nx[k]][j+ny[k]] == '.'){
            if(s[i+dx[k]][j+dy[k]] == s[i+dx[(k+1)%4]][j+dy[(k+1)%4]]){
                n++;
            }
        }
    }
    return n;
}
void solve(){
    int n=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(s[i][j]=='#'){
                n+=cc(i,j);
            }
        }
    }
    cout << n<<endl;
}
int main(){
    cin >> h>>w;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >>s[i][j];
        }
    }
    solve();
    cout << endl;
    return 0;
}