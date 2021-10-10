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
#define MOD 100000
#define MAX_N 90010

int main(){
    string n;
    cin>>n;
    int lst[n.size()];
    for(int i=0;i<n.size();i++) lst[i]=n[i]-'0';
    sort(lst, lst+n.size());

    int ans=0;
    do{
        for(int i=1;i<n.size();i++){
            if(lst[0]==0 || lst[i]==0) continue;
            int a=0, b=0;
            for(int j=0;j<i;j++) a+=pow(10, j)*lst[j];
            for(int j=i;j<n.size();j++) b+=pow(10, n.size()-j-1)*lst[j];
            ans=max(ans, a*b);
        }
    }while(next_permutation(lst, lst+n.size()));
    cout<<ans<<endl;
    return 0;
}