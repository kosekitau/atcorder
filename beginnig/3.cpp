#include <iostream>
using namespace std;
int main(){
    string a;
    int sum=0;
    cin >>a;
    for(int i=0;i<a.size();i++){
        int b = a[i]-'0';
        sum +=b; 
    }
    cout << sum<<endl;
    return 0;
    
}