#include <cstdio>
#include <iostream>
using namespace std;
int n,y;

void solve(){
    bool f=false;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            if((10000*i + 5000*j + 1000*(n-i-j)) == y){
                cout <<i<<' '<<j<<' '<<(n-i-j)<<endl;
                f=true;
            }
        }
        if(f) break;
    }
    if(!f) cout << "-1 -1 -1"<<endl;
    return;
}
int main(){
    cin >> n>>y;
    solve();
    return 0;
}