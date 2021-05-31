#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;

int main(){
    int n,k;
    vector<pair<ll, ll> > event;
    int A[880][880];
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>A[i][j];
        }
    }
    int m=k*k/2 +1;
    int r=1000000000;
    for(int i=1;i+k-1<=n;i++){
        for(int j=1;j+k-1<=n;j++){
            vector<int > event;
            for(int a=i;a<(i+k);a++){
                for(int b=j;b<(j+k);b++){
                    event.push_back(A[a][b]);
                }
            }
            sort(event.begin(), event.end(), greater<int>());
            r=min(r,event[m-1]);
        }
    }

    cout<<r<<endl;
    return 0;
}