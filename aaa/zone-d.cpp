#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <map>
#include <set>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 1100000000
#define MOD 1000000007

int main(void){
    string s;
    cin>>s;
    string T="";
    char pr='A';
    bool f=true;
    for(int i=0;i<s.length();i++){
        if(s[i]=='R') {
            //reverse(T.begin(), T.end());
            f=(f+1)%2;
            pr=T[T.length()-1];
            continue;
        }
        if(s[i]==pr){
            T.erase(T.length()-1);
            pr=T[T.length()-1];
        }
        else{
            T=T+s[i];
            pr=s[i];
        }
    }
    
    cout<<T<<endl;
}