#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <set>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 1000000007

int main(){
    int l, q;
    cin>>l>>q;
    set<int> L;
    L.insert(0);
    L.insert(l);
    int cnt=0;
    vector<int> r;
    for(int i=0;i<q;i++){
        int c, x;
        cin>>c>>x;
        if(c==1){
            L.insert(x);
        }
        else{
            auto idx=L.lower_bound(x);
            int b=*idx;
            idx--;
            int a=*idx;
            r.push_back(b-a);
            cnt++;
        }
    }
    for(int i=0;i<cnt;i++){
        cout<<r[i]<<endl;
    }
    return 0;
}