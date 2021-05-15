#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;

int main(){
    int n;
    cin>>n;
    string s, s_second; 
    int t=0, t_second=0;
    cin>>s>>t; 
    for(int i=1;i<n;i++){
        string S; int T;
        cin>>S>>T;
        if(T>t){
            t_second=t;
            t=T;
            s_second=s;
            s=S;
        }
        else if(t>T && T>t_second){
            s_second=S;
            t_second=T;
        }
    }
    cout<<s_second<<endl;
    return 0;
}