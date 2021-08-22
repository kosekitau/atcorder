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
    int k;
    string s;
    char sl[10];
    cin>>s;
    cin>>k;
    for(int i=0;i<s.length();i++) sl[i]=s[i];
    sort(sl, sl+s.length());
    
    ll i=1; 
    do{
        if(i==k){
            for(int i=0;i<s.length();i++) {
                cout<<sl[i];
            }
            cout<<endl;
            break;
        }
        i++;
    }while(next_permutation(sl, sl+s.length()));

    return 0;
}