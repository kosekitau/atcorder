#include <iostream>
using namespace std;

int main(){
    int n, sum=0;
    string s;
    cin >> n;
    cin >> s;
    for(int i=0;i<n-2;i++)
        if(s.substr(i,3)=="ABC") sum+=1;
    cout << sum<<endl;
    return 0;
}