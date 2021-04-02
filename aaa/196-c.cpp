#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long i=1;
    while(n>=stoll(to_string(i)+to_string(i))){
        i++;
    }
    cout<<i-1<<endl;
    return 0;
}