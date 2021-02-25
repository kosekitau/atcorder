#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int n;
int z[100000]={0}, t[100000]={0};
int a,x,y;

bool solve(int i, int sum){
    //
    if(i>a) return true;
    //範囲外
    if(sum<0) return false;
    
    //通れる
    if(t[i]!=0 && z[i]!=sum)
        return false;
    
    if(solve(i+1, sum+1))
        return true;
    else if(solve(i+1, sum-1))
        return true;

    return false;
}

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >>a>>x>>y;
        t[a]=a;
        z[a]=x+y;
    }
    if(solve(0, 0)) cout << "Yes"<<endl;
    else cout << "No"<<endl;
    return 0;
}