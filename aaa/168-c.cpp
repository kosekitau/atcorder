#include <cstdio>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
using ll = long long;
int main(){
    double a,b,h,m;
    cin>>a>>b>>h>>m;
    double ls=m*6, ss=h*30 + 0.5*m;
    double d = max(ls, ss)-min(ls, ss);
    d=d*M_PI/180;
    printf("%.10lf\n", sqrt( a*a+b*b - 2*a*b*cos(d) ) );
    return 0;
}