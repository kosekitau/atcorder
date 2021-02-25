#include <iostream>
#include <algorithm>
using namespace std;
int n, a[10000];
void solve(){
    int m=0, re=0;
    for(int l=0;l<n;l++){
        int m=a[l];
        for(int r=l;r<n;r++){
            m=min(m, a[r]);
            re=max(re, m*(r-l+1));
        }
    }
    cout << re<<endl;
    return;
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    solve();
    return 0;
}