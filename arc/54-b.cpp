#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <tuple>
#include<cmath>
#include<iomanip>

using namespace std;
using ll = long long;
typedef pair<int, int> P;
#define INF 2100000000
#define MOD 1000000007

double p;

double f(double x){
    return x + p*pow(2.0, -x/1.5);
}

int main(){
    cin>>p;
    double l=0, r=1e+18;

    while(r-l > 0.000000001){
        double c1 = (l*2.0+r)/3.0;
        double c2 = (l+r*2.0)/3.0;
        if(f(c1) > f(c2)) l=c1;
        else r=c2;
    }
    cout<<fixed<<setprecision(15)<<f(r)<<endl;
    return 0;
}