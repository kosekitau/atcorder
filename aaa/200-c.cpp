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
    int n;
    int l[210];
    cin>>n;
    memset(l, 0, sizeof(l));
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        l[(a%200)]++;
    }
    ll s=0;
    for(int i=0;i<200;i++){
        if(l[i]>1){
            ll r=0;
            ll sta=l[i]-1;
            for(int j=0;sta>0;j++){
                r+=sta;
                sta--;
            }
            s+=r;
        }
    }
    cout<<s<<endl;
    return 0;
}