#include <iostream>
using namespace std;

int a,b,c,x;

int solve(){
    int sum=0;
    for(int i=0;i<=a;i++){
        for(int j=0;j<=b;j++){
            for(int k=0;k<=c;k++){
                if((i*500 + j*100 + k*50) == x) sum+=1;
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