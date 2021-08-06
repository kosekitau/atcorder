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
#define INF 2000000001
#define MOD 1000000007
int main(){
    int r, c;
    cin>>r>>c;
    int table[r][c], lst[c], s=0;
    for(int i=0;i<c;i++) lst[i]=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>table[i][j];
            lst[j]+=table[i][j];
            s+=table[i][j];
        }
    }
    int cp_lst[c], rst=0;
    for(int bit=0;bit<(1<<r);bit++){
        int cr=0;
        for(int j=0;j<c;j++){
            cp_lst[j]=lst[j];
            for(int i=0;i<r;i++){
                if(bit&(1<<i)) {
                    if(table[i][j]) cp_lst[j]-=1;
                    else cp_lst[j]+=1;
                }
            }
            if(cp_lst[j]>(r-cp_lst[j])) cr+=cp_lst[j];
            else cr=cr+r-cp_lst[j];
        }
        rst = max(rst, cr);
    }
    cout<<rst<<endl;
    return 0;
}