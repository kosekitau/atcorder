#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
#define MAX_A 1010

int main(){
    int M,N,K;
    cin>>M>>N>>K;
    char JOI[MAX_A][MAX_A];
    int J[MAX_A][MAX_A],O[MAX_A][MAX_A],I[MAX_A][MAX_A];
    int c[K][4];
    for(int i=0;i<M;i++) for(int j=0;j<N;j++) cin>>JOI[i][j];
    for(int i=0;i<K;i++) cin>>c[i][0]>>c[i][1]>>c[i][2]>>c[i][3];

    memset(J, 0, sizeof(J));
    memset(O, 0, sizeof(O));
    memset(I, 0, sizeof(I));
    
    for(int i=1;i<=M;i++){
        for(int j=1;j<=N;j++){
            if(JOI[i-1][j-1]=='J') J[i][j]++;
            else if(JOI[i-1][j-1]=='O') O[i][j]++;
            else I[i][j]++;
        }
    }

    for(int i=1;i<=M;i++){
        for(int j=1;j<=N;j++){
            J[i][j]+=J[i-1][j]+J[i][j-1]-J[i-1][j-1];
            O[i][j]+=O[i-1][j]+O[i][j-1]-O[i-1][j-1];
            I[i][j]+=I[i-1][j]+I[i][j-1]-I[i-1][j-1];
        }
    }

    for(int i=0;i<K;i++){
        cout<<J[c[i][2]][c[i][3]]-J[c[i][0]-1][c[i][3]]-J[c[i][2]][c[i][1]-1]+J[c[i][0]-1][c[i][1]-1];
        cout<<' '<<O[c[i][2]][c[i][3]]-O[c[i][0]-1][c[i][3]]-O[c[i][2]][c[i][1]-1]+O[c[i][0]-1][c[i][1]-1];
        cout<<' '<<I[c[i][2]][c[i][3]]-I[c[i][0]-1][c[i][3]]-I[c[i][2]][c[i][1]-1]+I[c[i][0]-1][c[i][1]-1];
        cout<<endl;
    }

    return 0;
}