#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,k;
    int T[8][8];
    cin>>n>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>T[i][j];
        }
    }
    vector <int> order(n);
    for(int i=0;i<n;i++) order[i]=i;
    int c=0;
    do{
        if(order[0]!=0) break;
        int s=0;
        for(int i=0;i<n;i++) s+=T[order[i]][order[(i+1)%n]];
        if(s==k) c++;
    }while(next_permutation(order.begin(), order.end()));
    cout <<c<<endl;
    return 0;
}