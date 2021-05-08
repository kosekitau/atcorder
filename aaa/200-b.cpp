#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;

int main(){
    string n;
    ll k;
    cin>>n;
    cin>>k;
    for(int i=0;i<k;i++){
        ll nn = stol(n);
        if(nn%200==0){
            nn/=200;
            n = to_string(nn);
        }
        else{
            n+="200";
        }
    }
    cout<<n<<endl;
    return 0;
}