#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <tuple>
#include<cmath>
#include<iomanip>

using namespace std;
using ll = long long;
typedef pair<int, int> P;
#define INF 2100000000
#define MOD 1000000007


int main(){
    int a[4];
    for(int i=0;i<4;i++) a[i]=0;

    for(int i=0;i<4;i++){
        string s; cin>>s;
        if(s=="H") a[0]++;
        else if(s=="2B") a[1]++;
        else if(s=="3B") a[2]++;
        else a[3]++;
    }

    for(int i=0;i<4;i++){
        if(a[i]==0){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}