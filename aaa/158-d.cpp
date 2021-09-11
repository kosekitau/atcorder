#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <set>
#include <deque>

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 1000000007

int main(){
    string s;
    cin>>s;
    int Q;
    cin>>Q;
    deque<char> deq;
    for(int i=0;i<s.size();i++) deq.push_back(s[i]);

    int fg=0;
    for(int i=0;i<Q;i++){
        int q; cin>>q;
        if(q==1){
            fg=(fg+1)%2;
        }
        else{
            int f; cin>>f;
            if((f+fg)%2){
                char a; cin>>a;
                deq.push_front(a);
            }
            else{
                char a; cin>>a;
                deq.push_back(a);
            }
        }
    }
    
    string ans="";
    if(fg){ 
        while(!deq.empty()){
            ans+=deq.back();
            deq.pop_back();
        }
    }
    else {
        while(!deq.empty()){
            ans+=deq.front();
            deq.pop_front();
        }
    }
    cout<<ans<<endl;
    return 0;
}