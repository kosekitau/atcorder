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

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 100000
#define MAX_N 90010

int main(){
    int n, q;
    cin>>n>>q;

    int front[n];
    int back[n];
    for(int i=0;i<n;i++) front[i]=i;
    for(int i=0;i<n;i++) back[i]=i;

    for(int i=0;i<q;i++){
        int qu; cin>>qu;
        if(qu==1){
            int x, y;
            cin>>x>>y;
            x--; y--;
            front[y]=x;
            back[x]=y;
        }
        else if(qu==2){
            int x, y;
            cin>>x>>y;
            x--; y--;
            front[y]=y;
            back[x]=x;
        }
        else {
            int x;
            cin>>x;
            x--;
            int pre=x;
            vector<int> r;
            while(pre!=front[pre]) pre=front[pre];
            r.push_back(pre);
            while(pre!=back[pre]) {
                pre=back[pre];
                r.push_back(pre);
            }
            cout<<r.size()<<' ';
            for(auto nxt: r) cout<<nxt+1<<' ';
            cout<<endl;
        }
    }
    return 0;
}