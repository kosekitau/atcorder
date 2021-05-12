#include <iostream>
#include <cstring>
#include <algorithm>
#include <math.h>
using namespace std;
using ll = long long;
double dmax(double a, double b){
    if(a>b) return a;
    return b;
}

int main(){
    int N,D,H;
    cin>>N>>D>>H;
    double min_b=0, b;
    for(int i=0;i<N;i++){
        double d, h;
        cin>>d>>h;
        double k = (H-h) / (D-d);
        b = H-k*D;
        if(min_b<=b) min_b=b;
    }
    printf("%.10lf\n", dmax(0, min_b));
    return 0;
}