#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
#define MAX_A 1010

int main(){
    double a,b;
    cin>>a>>b;
    printf("%.6lf\n", b/100*a);
    return 0;
}