#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int k, a[1000010];
    cin>>k;
    a[1]=7%k;
    for(int i=2;i<=k;i++){
        a[i]=(a[i-1]*10+7)%k;
    }

    for(int i=1;i<=k;i++){
        if(a[i]==0){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}