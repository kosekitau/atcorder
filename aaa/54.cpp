#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,m;
int a[8],b[8];
void solve(){
    vector<int> order(n);
    for(int i=0;i<n;i++) order[i] = i+1;
    bool ok,f;
    int s=0;
    do{
        if(order[0]!=1) break;
        f=true;
        for(int i=0;i<n-1;i++){
            ok=false;
            for(int j=0;j<m;j++){
                if((order[i]==a[j]&&order[i+1]==b[j]) || (order[i]==b[j]&&order[i+1]==a[j])){
                    ok=true;
                    break;
                }
            }
            if(!ok){
                f=false;
                break;
            }
        }
        if(f) s++;
    }while(next_permutation(order.begin(), order.end()));
    cout << s<<endl;
}
int main(){
    cin >>n>>m;
    for(int i=0;i<m;i++){
        cin>>a[i]>>b[i];
    }
    solve();
    return 0;
}