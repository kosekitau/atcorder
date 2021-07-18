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

using namespace std;
using ll = long long;
typedef pair<int, int> P;
#define INF 2100000000
#define MOD 1000000007


int main(){
    int n;
    string s;
    cin>>n>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            if(i%2){
                cout<<"Aoki"<<endl;
                break;
            }
            else{
                cout<<"Takahashi"<<endl;
                break;
            }
        }
    }
    return 0;
}