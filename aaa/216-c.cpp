#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 1000000007

int main(){
    ll n;
    cin>>n;

    ll k=1;
    vector <char> ans;
    for(int i=0;n!=1;i++){
        if(n%2){
            ans.push_back('A');
            n-=1;
        }
        else {
            ans.push_back('B');
            n/=2;
        }
    }
    cout<<'A';
    for(int i=ans.size()-1;i>-1;i--) {
        cout<<ans[i];
    }
    cout<<endl;

    return 0;
}