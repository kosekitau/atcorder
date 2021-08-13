#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <map>
#include <set>
#include <ctime>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 1000000001
#define MOD 1000000007

int main(void){
    int n; cin>>n;
    string s; cin>>s;
    ll sm[3][n+1];
    for(int i=0;i<3;i++){
        for(int j=0;j<n+1;j++) sm[i][j]=0;
    } 

    for(int i=n-1;i>-1;i--){
        if(s[i]=='R') sm[0][i]++;
        else if(s[i]=='G') sm[1][i]++;
        else sm[2][i]++;
        for(int j=0;j<3;j++) sm[j][i]+=sm[j][i+1];
    }

    map<char, int> idx;
    idx['R']=0; idx['G']=1; idx['B']=2; 
    string vl = "RGB";
    ll r=0;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            int k=j+1;
            if(s[i]!=s[j]){
                int ndx=3-idx[s[i]]-idx[s[j]];
                r+=sm[idx[vl[ndx]]][k];
                if(j+j-i<n && s[j+j-i]==vl[ndx]) r--;
            }
        }
    }
    cout<<r<<endl;
    return 0;
}