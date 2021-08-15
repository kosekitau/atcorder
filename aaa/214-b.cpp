#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000001
#define MOD 1000000007

int main(){
    int s, t;
    cin>>s>>t;
    int r=0;
    for(int i=0;i<101;i++){
        for(int j=0;j<101;j++){
            for(int k=0;k<101;k++){
                if(i+j+k<=s && i*j*k<=t) r++;
            }
        }
    }
    cout<<r<<endl;
    return 0;
}