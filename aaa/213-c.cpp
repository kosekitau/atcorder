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
    int h, w, n;
    cin>>h>>w>>n;
    vector<int> A, B;
    set<int> sa, sb;
    int a[n+1], b[n+1];
    for(int i=1;i<n+1;i++) {
        cin>>a[i]>>b[i];
        if(sa.find(a[i])==sa.end()) A.push_back(a[i]);
        if(sb.find(b[i])==sb.end()) B.push_back(b[i]);
        sa.insert(a[i]);
        sb.insert(b[i]);
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    for(int i=1;i<n+1;i++){
        cout<< lower_bound(A.begin(), A.end(), a[i])-A.begin()+1<<' '<<lower_bound(B.begin(), B.end(), b[i])-B.begin()+1<<endl;
    }
    return 0;
}