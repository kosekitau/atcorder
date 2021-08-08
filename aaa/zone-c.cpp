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
#define INF 1100000000
#define MOD 1000000007

int n;
int x[3030][5];
int cnt[1<<5];

int getMask(int i, int lim){
    int res=0;
    for(int j=0;j<5;j++) if(lim<=x[i][j]) res+=1<<j;
    return res;
}

bool check(int lim){
    for(int i=0;i<(1<<5);i++) cnt[i]=0;
    for(int i=0;i<n;i++) cnt[getMask(i, lim)]++;
    for(int msk1=0;msk1<(1<<5);msk1++) for(int msk2=0;msk2<(1<<5);msk2++) for(int msk3=0;msk3<(1<<5);msk3++){
        if((msk1|msk2|msk3)==(1<<5)-1 && 0<cnt[msk1] && 0<cnt[msk2] && 0<cnt[msk3]) return true;
    }
    return false;
}

int main(void){
    cin>>n;
    for(int i=0;i<n;i++) for(int j=0;j<5;j++) cin>>x[i][j];

    int l=0, r=INF;
    while(l+1!=r){
        int mid = (l+r)/2;
        if(check(mid)) l=mid;
        else r=mid;
    }
    cout<<l<<endl;
}