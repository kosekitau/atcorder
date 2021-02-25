#include <iostream>
using namespace std;

int main(){
    int n,x;
    string s;
    cin >> n>>x;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='o'){
            x+=1;
        }
        else{
            x=max(0, x-1);
        }
    }
    cout << x <<endl;
    return 0;
}