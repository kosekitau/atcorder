#include <cstdio>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    double x0,y0,xx,yy;
    cin>>x0>>y0>>xx>>yy;
    double ox, oy;
    ox=(xx+x0)/2; oy=(yy+y0)/2;
    double hen = sqrt(pow(ox-x0, 2)+pow(oy-y0, 2));
    
    x0-=ox; y0-=oy;
    //p1へのラジアン
    double radp1 = atan2(y0, x0) + 2*M_PI/N;
    double y1=sin(radp1)*hen;
    double x1=cos(radp1)*hen;
    printf("%.11lf ", x1+ox);
    printf("%.11lf\n", y1+oy);
    return 0;
}