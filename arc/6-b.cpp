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
#include <numeric>

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<string, string>;
#define INF 2000000003
#define MOD 998244353
#define MAX_N 1010

int main(){
    int n, l;
    scanf("%d %d\n", &n, &l);
    char a[l][2*n-1];
    int st=0;
    for(int i=0;i<l;i++){
        string s;
        getline(cin, s);
        for(int j=0;j<s.size();j++){
            a[i][j]=s[j];
        }
    }

    string s; getline(cin, s);
    for(int i=0;i<s.size();i++){
        if(s[i]=='o') {
            st=i;
            break;
        }
    }

    int x=st, y=l-1;
    while(y>=0){
        if(a[y][min(x+1, 2*n-1)]=='-') x+=2;
        else if(a[y][max(x-1, 0)]=='-') x-=2;
        y--;
    }
    cout<<x/2+1<<endl;
    return 0;
}