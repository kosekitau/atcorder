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
    int n,k;
    cin>>n>>k;

    ll s=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            string l=to_string(i)+"0"+to_string(j);
            s+=stoi(l);
        }
    }
    cout<<s<<endl;
    return 0;
}