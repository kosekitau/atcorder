#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
#define MAX_A 1010

int main(){
    int k,abc[3];
    cin>>abc[0]>>abc[1]>>abc[2]>>k;
    int s=0;
    for(int i=0;i<3;i++){
        if(abc[i]<k){
            s+=(1-i)*abc[i];
            k-=abc[i];
        }
        else{
            s+=k*(1-i);
            break;
        }
    }
    cout<<s<<endl;
    return 0;
}