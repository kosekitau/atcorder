#include <iostream>
using namespace std;
int main(){
    int n;
    long long a, b, s=0;
    cin>>n;
    for(long long i=0;i<n;i++){
        cin>>a>>b;
        if((b-a+1)%2 == 1){
            s+=(b-a+1)/2*(a+b) + (a+b)/2;
        }
        else{
            s+=(b-a+1)/2*(a+b);
        }
    }
    cout << s<<endl;
    return 0;
}