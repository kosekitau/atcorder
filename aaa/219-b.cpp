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
    string t, s1, s2, s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    cin>>t;
    
    for(int i=0;i<t.size();i++){
        if(t[i]-'0'==1) cout<<s1;
        else if(t[i]-'0'==2) cout<<s2;
        else cout<<s3;
    }
    cout<<endl;
    return 0;
}