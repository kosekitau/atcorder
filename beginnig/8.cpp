#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int n, d[100];

int solve(){
    int r=1;
    sort(d, d+n, greater<int>());
    int k=d[0];
    for(int i=1;i<n;i++){
        if(k>d[i]){
            k=d[i];
            r+=1;
        }
    }
    return r;
}

int main(){
    cin>> n;
    for(int i=0;i<n;i++) cin>> d[i];
    cout << solve()<<endl;
}