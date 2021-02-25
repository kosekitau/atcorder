#include <iostream>
#include <math.h>
using namespace std;

int ei(int n){
    int s=0;
    for(int i=0;n>0;i++){
        int a = n%8;
        s+= a*pow(10,i);
        n/=8;
    }
    return s;
}

int main(){
    int n; 
    cin>>n;
    int s=0;
    for(int i=1;i<=n;i++){
        if ((to_string(i).find('7') == string::npos) && to_string(ei(i)).find('7') == string::npos){
            s++;
        }
    }
    cout << s<<endl;
    return 0;
}