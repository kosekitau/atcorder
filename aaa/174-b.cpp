#include <cstdio>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
    int X[200100], Y[200100];
    int n;
    double d;
    cin>>n>>d;
    for(int i=0;i<n;i++){
        cin>>X[i]>>Y[i];
    }
    int s=0;
    for(int i=0;i<n;i++){
        if(d >= sqrt(pow(X[i],2)+pow(Y[i], 2))) s++;
    }
    cout<<s<<endl;
    return 0;
}