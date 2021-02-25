#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int n, a[70000];
void solve(){
    int m=pow(2,n);
    int l=0, r=0, li,ri;
    for(int i=0;i<m/2;i++){
        if(l<a[i]){
            l=a[i];
            li=i;
        }
    }
    for(int i=m/2;i<m;i++){
        if(r<a[i]){
            r=a[i];
            ri=i;
        }
    }
    if(l>r) cout << ri+1<<endl;
    else cout << li+1<<endl;
    return;
}

int main(){
    cin>>n;
    for(int i=0;i<pow(2, n);i++){
        cin >> a[i];
    }
    solve();
    return 0;
}