#include <iostream>
#include <cstring>
#include <algorithm>
#include <math.h>
using namespace std;
using ll = long long;
int main(){
    int N,D,H;
    cin>>N>>D>>H;
    double max_h=0, max_d=0;
    for(int i=0;i<N;i++){
        double d, h;
        cin>>d>>h;
        if(max_h<h){
            max_d=d; max_h=h;
        }
    }
    double k= (H-max_h) / (D-max_d);
    double b= H-k*D;
    printf("%.10lf\n", b);
    return 0;
}