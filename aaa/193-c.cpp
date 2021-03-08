#include <iostream>
#include <math.h>
#include <unordered_set>
using namespace std;
int main(){
    long long n;
    cin>>n;
    unordered_set<long long> s;
    for(long long a=2;a*a<=n;a++){
        for(long long b=2;pow(a,b)<=n;b++){
            s.insert(pow(a,b));
        }
    }
    cout<<n-s.size()<<endl;
    return 0;
}