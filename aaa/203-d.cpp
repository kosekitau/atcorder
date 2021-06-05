#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
#define N 810 
#define MAX_A 1000000000

int main(){
    int n,k, lim;
    int a[N][N];
    int s[N][N];

    for(int i=0;i<N;i++){
        s[i][0]=0;
        s[0][i]=0;
    }

    int ng = -1;
    int ok = MAX_A;
    int mid;
    bool ext;
    cin>>n>>k;
    lim = ((k*k)/2)+1;//lim個未満であればok

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cin>>a[i][j];
    }

    while( (ng+1) < ok ){
        mid=(ng+ok)/2; //二分探索
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                //n*n区間で
                s[i+1][j+1] = s[i+1][j]+s[i][j+1]-s[i][j];
                if(a[i][j]>mid) s[i+1][j+1]++;
            }
        }
        ext=false;
        for(int i=0;i<n-k+1;i++){
            for(int j=0;j<n-k+1;j++){
                if ((s[i + k][j + k] + s[i][j] - s[i][j + k] - s[i + k][j]) < lim)
                    ext = true;
            }
        }
        if(ext) ok=mid;
        else ng=mid;
    }

    return 0;
}