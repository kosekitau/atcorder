#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
using ll = long long;
int main(){
    int n, H[100010];
    cin>>n;
    vector<pair<ll, int>> event;
    for(int i=0;i<n;i++){
        int h,s; cin>>H[i]>>S[i];
        event.push_back(make_pair(h+s*(n-1), i));
    }
    sort(event.begin(), event.end());


    for(auto e : event){
        cout<<e.first<<' '<<e.second<<endl;
    }
    return 0;
}