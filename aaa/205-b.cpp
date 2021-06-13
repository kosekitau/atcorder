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
    int n;
    cin>>n;
    int A[1010];
    for(int i=1;i<=n;i++) A[i]=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        A[a]++;
    }
    for(int i=1;i<=n;i++){
        if(A[i]==0){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}