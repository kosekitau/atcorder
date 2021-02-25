#include <iostream>
using namespace std;
int main(){
    int n, i, j;
    int a[200];
    bool f=false;
    cin >> n;
    for(i=0;i<n;i++) cin >> a[i];
    
    for(i=1;;i++){
        for(j=0;j<n;j++){
            if(a[j]%2==1){
                i-=1;
                f=true;
                break;
            }
            a[j]/=2;
        }
        if(f) break;
    }
    cout <<i<<endl;
    return 0;
}