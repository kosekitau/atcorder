#include <iostream>
#include <cstring>
#include <algorithm>
#include <math.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    cin>>n;
    int s=0;
    for(int i=105;i<=n;i=i+2){
        int c=0;
        for(int j=1;j<=i;j++){
            if(i%j==0) c++;
        }
        if(c==8) s++;
    }
    cout<<s<<endl;
    return 0;
}