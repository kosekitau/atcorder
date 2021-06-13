#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
#define MAX_A 1010

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(c%2==0){
        if(abs(a)>abs(b)){
            cout<<'>'<<endl;
        }
        else if(abs(a)<abs(b)){
            cout<<'<'<<endl;
        }
        else{
            cout<<'='<<endl;
        }
    }
    else{
        if(a>b){
            cout<<'>'<<endl;
        }
        else if(a<b){
            cout<<'<'<<endl;
        }
        else{
            cout<<'='<<endl;
        }
    }

    return 0;
}