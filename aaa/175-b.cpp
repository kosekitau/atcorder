#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, l[100];
    cin>>n;
    for(int i=0;i<n;i++) cin>>l[i];
    int s=0;
    sort(l, l+n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(l[i]+l[j]>l[k] && l[i]!=l[j] && l[j]!=l[k] && l[k]!=l[i]) s++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}