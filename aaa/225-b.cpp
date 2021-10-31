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
#define MOD 998244353
#define MAX_N 3001

int main(){
    int n;
    cin>>n;
    int lst[n];
    for(int i=0;i<n;i++) lst[i]=0;

    for(int i=0;i<n-1;i++){
        int a, b;
        cin>>a>>b;
        a--; b--;
        lst[a]++; lst[b]++;
    }

    for(int i=0;i<n;i++){
        if(lst[i]==n-1){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;

    return 0;
}