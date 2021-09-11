#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <set>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 1000000007

int main(){
    int A[3][3];
    for(int i=0;i<3;i++) for(int j=0;j<3;j++) cin>>A[i][j];
    
    int n; cin>>n;
    bool s[3][3];
    for(int i=0;i<3;i++) for(int j=0;j<n;j++) s[i][j]=false;
    for(int i=0;i<n;i++){
        int b; cin>>b;
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(b==A[j][k]) s[j][k]=true;
            }
        }
    }
    bool f=false;
    for(int i=0;i<3;i++) if(s[i][0] && s[i][1] && s[i][2]) f=true;
    for(int i=0;i<3;i++) if(s[0][i] && s[1][i] && s[2][i]) f=true;
    
    if(s[0][0] && s[1][1] && s[2][2]) f=true;
    if(s[0][2] && s[1][1] && s[2][0]) f=true;
    
    if(f) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}