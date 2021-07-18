#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <tuple>
#include <limits.h>

using namespace std;
using ll = long long;
typedef pair<int, int> P;
#define INF 2100000000
#define MOD 1000000007

int main(){
    int n, a,x,y;
    cin>>n>>a>>x>>y;
    if(n<=a){
        cout<<x*n<<endl;
    }
    else {
        cout<<(n-a)*y + a*x<<endl;
    }
    return 0;
}