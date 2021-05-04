//https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_B&lang=ja

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <bitset>
using namespace std;
using ll = long long;
int main(){
    int n, q;
    cin>>n;
    int S[n];
    for(int i=0;i<n;i++) cin>>S[i];
    cin>>q;
    int T[q];
    for(int i=0;i<q;i++) cin>>T[i];

    int s=0;
    for(int i=0;i<q;i++){
        if(T[i] == S[lower_bound(S, S+n, T[i]) - S]){
            s++;
        }
    }
    cout<<s<<endl;

    return 0;
}