#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    double a,b;
    cin>>a>>b;
    printf("%.10lf\n",(a-b)/a*100);
    return 0;
}