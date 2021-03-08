#include <iostream>
#include <math.h>
using namespace std;
int main(){
    string x;
    long long m;
    cin>>x>>m;
    int d=0;
    for(int i=0;i<x.size();i++) d=max(d, x[i]-'0');
    
    int s=0,i;
    for(i=d+1; (x[0]-'0')*pow(i, x.size()-1)<m ;i++){
        s++;
    }
    i--;
    for(int j=x.size()-1;j>=0;j--){
        pow(i,)
    }
    cout<<s<<endl;
    return 0;
}