#include <iostream>
using namespace std;
int main(){
    int n, p, l[210000];
    cin>>n;
    int a=0;
    for(int i=0;i<n;i++){
        cin >> p;
        l[p]++;
        while(l[a]){
            a++;
        }
        cout<<a<<endl;
    }
    return 0;
}