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

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<string, string>;
#define INF 2000000003
#define MOD 1000000007
#define MAX_N 1010

int main(){
    string  s, t;
    cin>>s>>t;

    int aidx=-100;
    for(int i=s.size()-1;i>=t.size()-1;i--){
        bool f=true;
        if(s[i]==t[t.size()-1] || s[i]=='?'){
            for(int j=0;j<t.size();j++) if(s[i-j]!=t[t.size()-j-1] && s[i-j]!='?') f=false;
            if(f){
                aidx=i;
                break;
            }
        }
    }
    if(aidx==-100){
        cout<<"UNRESTORABLE"<<endl;
    }
    else{
        for(int i=s.size()-1;i>=0;i--){
            if(i==aidx){
                for(int j=0;j<t.size();j++){
                    s[i-j]=t[t.size()-j-1];
                }
                i-=t.size()-1;
            }
            else if(s[i]=='?'){
                s[i]='a';
            }
            else{
                continue;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}