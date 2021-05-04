#include <iostream>
#include <cstdio>
#include <algorithm>
#include <bitset>
using namespace std;
using ll = long long;
int main(){
    int n, m;
    bool xy[110][110];
    cin>>n>>m;
    fill(xy[0], xy[n], false);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        xy[x-1][y-1]=xy[y-1][x-1]=true;
    }

    int s=0;
    for(int bit=0;bit<(1<<n);bit++){
        bool f=true;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) continue;
                if( (1<<i)&bit && (1<<j)&bit && !xy[i][j] ){
                    f=false;
                }
            }
        }
        if(f){
            s=max(s, (int)bitset<32>(bit).count() );
        }
    }
    cout<<s<<endl;
    return 0;
}