#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int n;
int x[8],y[8];
void solve(){
    vector<int> order(n);
    for(int i=0;i<n;i++) order[i]=i;
    double s=0;
    int i=0;
    do{
        for(int i=1;i<n;i++){
            s+=sqrt((x[order[i]]-x[order[i-1]])*(x[order[i]]-x[order[i-1]]) + 
            (y[order[i]]-y[order[i-1]])*(y[order[i]]-y[order[i-1]]));
        }
        i++;
    }while(next_permutation(order.begin(), order.end()));
    printf("%.10lf\n", s/i);
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    solve();
    return 0;
}