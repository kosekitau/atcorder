#include <iostream>
#include <math.h>
using namespace std;
int main(){
    long long X, K, D,r,result;
    cin>>X>>K>>D;
    X=abs(X);
    r=X/D;
    if(K<r){
        result=X-K*D;
    }
    else{
        result=X-D*r;
        if((K-r)%2){
            result=min(abs(result+D), abs(result-D));
        }
    }
    cout<<abs(result)<<endl;
    return 0;
}