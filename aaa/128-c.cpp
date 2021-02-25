#include <iostream>
using namespace std;

int n,m;
int k[11];
int s[11][11];
int p[11];

bool solve(int bit){
    //電球の個数
    for(int i=1;i<=m;i++){
        int count =0;
        for(int j=1;j<=k[i];j++){
            //電球mの付いてて欲しいスイッチがon
            if (bit & (1<<s[i][j])){
                count++;
            }
        }
        //条件を満たさない
        if(count%2!=p[i]){
            return false;
        }
    }
    return true;
}

int main(){
    cin >> n>>m;
    for(int i=1;i<=m;i++){
        cin >> k[i];
        for(int j=1;j<=k[i];j++){
            cin >> s[i][j];
            s[i][j]--;//1→0, 2→1
        }
    }
    
    for(int i=1;i<=m;i++){
        cin >> p[i];
    }
    int count =0; 
    //bitはスイッチのonoffの状態
    for(int bit=0;bit<(1<<n);bit++){
        if (solve(bit)){
            count++;
        }
    }
    cout << count<<endl;
    
    return 0;
}