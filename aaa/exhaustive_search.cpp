//https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_A&lang=ja

#include <iostream>
using namespace std;
using ll = long long;
int main(){
    int n, q;
    int A[22], m[222];
    cin>>n;
    for(int i=0;i<n;i++) cin>>A[i];
    cin>>q;
    for(int i=0;i<q;i++) cin>>m[i];

    bool r[222];
    fill(r, r+q, false);
    for(int i=0;i<q;i++){
        for(int bit=0;bit<(1<<n);bit++){
            int s=0;
            for(int j=0;j<n;j++){
                if((1<<j)&bit){
                    s+=A[j];
                }
            }
            if(s==m[i]){
                r[i]=true;
                break;
            }
        }
    }

    for(int i=0;i<q;i++){
        if(r[i]) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }

    return 0;
}