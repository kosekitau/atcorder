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
#define INF 2000000000
#define MOD 1000000007

int main(void){
    int n;
    cin>>n;
    vector<P> A;
    A.resize(n);
    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        A.push_back(make_pair(a, i+1));
    }
    sort(A.begin(), A.end());
    cout<<A[A.size()-2].second<<endl;
    return 0;
}