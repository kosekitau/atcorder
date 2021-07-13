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
#include <regex>

using namespace std;
using ll = long long;
#define INF 90010

int main(){
    int s[10010], c;
    for(c=0;;c++){
        int n; cin>>n;
        if(n==0) break;
        int table[INF];
        for(int i=0;i<INF;i++) table[i]=0;    
        for(int i=0;i<n;i++){
            int h,m,s,start,end;
            scanf("%d:%d:%d", &h, &m, &s);
            start = h*3600 + m*60 + s;
            scanf("%d:%d:%d", &h, &m, &s);
            end = h*3600 + m*60 + s;
            table[start]++;
            table[end]--;
        }

        for(int i=0;i<INF;i++) if(0<i) table[i]+=table[i-1];
        s[c]=0;
        for(int i=0;i<INF;i++) s[c]=max(s[c], table[i]);
    }
    for(int i=0;i<c;i++) cout<<s[i]<<endl;
    return 0;
}