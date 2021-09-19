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
    int n;
    cin>>n;
    if (0<=n && n<40) cout<<40-n<<endl;
    else if (40<=n && n<70) cout<<70-n<<endl;
    else if (70<=n && n<90) cout<<90-n<<endl;
    else cout<<"expert"<<endl;

    return 0;
}