#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 1000000000

int main(){
    ll a, b,c,d;
    cin>>a>>b>>c>>d;
    ll bl=a, rd=0;
    if(b>=c*d){
        cout<<-1<<endl;
        return 0;
    }
    if(a%(c*d-b)==0) cout<<a/(c*d-b)<<endl;
    else cout<<a/(c*d-b)+1<<endl;
    return 0;
}