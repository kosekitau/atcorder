#include <iostream>
using namespace std;

int a,b,c,x,y;
int solve(){
    int sum=a*x+ b*y;
    int z,h;
    h=max(x,y)*2;
    for(int i=1;i<=h;i++){
        z=2*c*i + a*max(0,x-i) + b*max(0,y-i);
        if(z<sum){
            sum=z;
        }
    }
    return sum;
}
int main(){
    cin >>a>>b>>c>>x>>y;
    cout <<solve()<<endl;
    return 0;
}