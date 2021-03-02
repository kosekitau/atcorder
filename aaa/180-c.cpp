#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <long> r1;
    long n, i;
    cin>>n;
    for(i=1;i*i<=n;i++){
        if(n%i==0){
            r1.push_back(i);
            r1.push_back(n/i);
        }
    }
    sort(r1.begin(),r1.end());
    for(auto x : r1){
        cout<<x<<endl;
    }
    return 0;
}