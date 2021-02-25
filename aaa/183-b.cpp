#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    double sx, sy, gx, gy;
    cin >>sx>>sy>>gx>>gy;
    printf("%.10lf\n", (gx-sx)*(sy/(sy+gy))+sx);
    return 0;
}