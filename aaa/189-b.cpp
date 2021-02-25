#include <iostream>
using namespace std;
int main(){
    int n, x, i;
    int v[1010], p[1010];
    cin>>n>>x;
    for(i=1;i<=n;i++){
        cin >>v[i]>>p[i];
    }
    int sum=0;
    int a=-1;
    for(i=1;i<=n;i++){
        sum+=v[i]*p[i];
        if(x*100<sum){
            a=i;
            break;
        }
    }
    cout << a<<endl;
    return 0;
}