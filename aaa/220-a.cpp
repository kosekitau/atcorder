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
#define MOD 1000000007
#define MAX_N 10000000

int main(){
    int a, b,c ;
    cin>>a>>b>>c;
    for(int i=1;;i++){
        if(c*i>b){
            cout<<-1<<endl;
            return 0;
        }
        if(a<=c*i && c*i<=b){
            cout<<c*i<<endl;
            break;
        }
    }
    return 0;
}