#include <iostream>
using namespace std;

int main(){
    int n,m,t;
    int a, b;
    cin >> n>>m>>t;
    int v=n, p=0;
    bool f=true;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        v-=a-p;
        if(v<=0) f=false;
        v = min(v+b-a, n);
        p=b;
    }
    if( (v-(t-b))<=0 ) f=false;

    if(f) cout << "Yes"<<endl;
    else cout << "No"<<endl;
    return 0;
}