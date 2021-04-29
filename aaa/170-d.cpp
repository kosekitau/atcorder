#include <cstdio>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
using ll = long long;
int main(){
    int n, a[200010];
    bool dp[1000010];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n);
    fill(dp, dp+a[n-1]+1, true);

    int s=0;
    for(int i=0;i<n;i++){
        if(dp[a[i]]){
            s++;
        }
        for(int j=1;j*a[i]<=a[n-1];j++){
            int d=j*a[i];
            dp[d]=false;
        }   
    }
    cout<<s<<endl;
    return 0;
}