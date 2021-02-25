#include <iostream>
using namespace std;

int n;
int t[100000], x[100000], y[100000];
int main(){
    cin >> n;
    t[0]=x[0]=y[0]=0;
    for(int i=0;i<n;i++)
        cin >> t[i+1] >>x[i+1]>>y[i+1];

    bool f = false;
    for(int i=0;i<n;i++){
        int dt=t[i+1] - t[i];
        int dist = abs(x[i+1]-x[i]) + abs(y[i+1]-y[i]);
        
        if(dt%2==dist%2 && dt>=dist) f=true;
        else f=false;
    }
    if(f) cout <<"Yes"<<endl;
    else cout << "No"<<endl;
    return 0;
}