#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;

int main(){
    int n, A[222];
    cin>>n;
    for(int i=0;i<n;i++) cin>>A[i];
    vector<vector<int> > bk(200, vector<int>(0));

    n=min(n, 8);
    for(int bit=0;bit<(1<<n);bit++){
        int s=0;
        vector<int> l;
        for(int i=0;i<n;i++){
            if( bit&(1<<i) ){
                l.push_back(i+1);
                s+=A[i];
                s%=200;
            }
        }
        if(bk[s].size()!=0){
            cout<<"Yes"<<endl;
            cout<<bk[s].size();
            for(auto &nx : bk[s]) cout<<' '<<nx;
            cout<<endl;
            cout<<l.size();
            for(auto &nx : l) cout<<' '<<nx;
            cout<<endl;
            return 0;
        }
        else{
            bk[s]=l;
        }
    }
    cout<<"No"<<endl;

    return 0;
}