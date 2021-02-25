#include <iostream>
using namespace std;
int n,x,a[100000];
int main(){
    cin >> n>>x;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++){
        if(a[i]!=x) cout << a[i];
        if(i!=n-1) cout << ' ';
    }
    cout << endl;
    return 0;
}