#include <iostream>
#include <algorithm>
using namespace std;

int n, a[100];
int solve(){
    int x=0,y=0;
    sort(a, a+n, greater<int>());
    for(int i=0;i<n;i=i+2){
        x+=a[i];
        y+=a[i+1];
    }
    return x-y;
}
int main(){
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    cout << solve()<< endl;
    return 0;
}