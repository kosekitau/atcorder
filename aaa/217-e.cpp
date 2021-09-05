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
    int Q;
    cin>>Q;
    queue<int> que;
    priority_queue<int, vector<int>, greater<int>> pq;

    int r[Q], cnt=0;
    for(int i=0;i<Q;i++){
        int q; cin>>q;
        if(q==1){
            int x; cin>>x;
            que.push(x);
        }
        else if(q==2){
            if(pq.empty()){
                int z=que.front();
                que.pop();
                r[cnt++]=z;
            }
            else{
                int z=pq.top();
                pq.pop();
                r[cnt++]=z;
            }
        }
        else {
            while(!que.empty()){
                int z=que.front();
                que.pop();
                pq.push(z);
            }
        }
    }
    for(int i=0;i<cnt;i++) cout<<r[i]<<endl;
    return 0;
}