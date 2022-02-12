#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <set>
#include <tuple>
#include <map>
#include <numeric>
#include <bitset>

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<string, string>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    int n, k;
    cin>>n>>k;
    int p[n];
    for(int i=0;i<n;i++) cin>>p[i];
    
    priority_queue<int, vector<int>, greater<int> > pq;
    for(int i=0;i<k;i++) pq.push(p[i]);

    vector<int> ans;
    ans.push_back(pq.top());
    for(int i=k;i<n;i++){
        int c=pq.top();
        if(c<p[i]){
            pq.pop();
            pq.push(p[i]);
            c=pq.top();
        }
        ans.push_back(c);
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }

    return 0;
}