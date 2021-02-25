#include <iostream>
using namespace std;

long long n;

int f(long long a){
    int i;
    for(i=0;a>0;i++){
        a/=10;
    }
    return i;
}
int solve(){
    int r=f(n);
    for(long long i=1;i*i<=n;i++){
        if(n%i==0){
            r=min( r, max(f(i), f(n/i)) );
        }
    }
    return r;
}

int main(){
    cin >> n;
    cout << solve()<<endl;
    return 0;
}