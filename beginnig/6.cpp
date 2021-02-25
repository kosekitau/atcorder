#include <iostream>
#include <cstdio>
using namespace std;

int n,a,b;

int d(int z){
    int r=0;
    for(int i=0;z!=0;i++){
        r+=z%10;
        z=z/10;
    }
    return r;
}

int solve(){
    int sum=0;
    for(int i=0;i<=n;i++){
        int s=d(i);
        if(a<=s && s<=b) sum+=i;
    }
    return sum;
}

int main(){
    cin >> n>>a>>b;
    cout << solve()<<endl;;
}