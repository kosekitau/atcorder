#include <cstdio>
#include <iostream>
using namespace std;
int a,b,c,x;

bool binary_search(int y){
    int l=0, r=c+1;
    while(r-l>=1){
        int i=(l+r)/2; //真ん中
        if(50*i == y) return true;
        else if(50*i < y) l=i+1;
        else r=i;
    }
    return false;
}

int solve(){
    int sum=0;
    for(int i=0;i<=a;i++){
        for(int j=0;j<=b;j++){
            if(binary_search(x-i*500-j*100)){
                sum+=1;
            }
        }
    }
    return sum;
}
int main(){
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> x;
    cout << solve()<<endl;
    return 0;
}