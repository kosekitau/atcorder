#include <iostream>
#include <cstring>
#include <algorithm>
#include <math.h>
using namespace std;
using ll = long long;
int main(){
    int n,m;
    int A[110][110];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }
    ll r=0;
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            ll scr=0;
            for(int k=0;k<n;k++){
                int snd = max(A[k][i], A[k][j]);
                scr+=snd;
            }
            r=max(r, scr);
        }       
    }
    cout<<r<<endl;
    return 0;
}