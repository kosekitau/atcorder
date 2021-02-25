#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int n, p[8],q[8];

void solve(){
    vector<int> order(n);
    for(int i=0;i<n;i++) order[i]=i+1;
    int k=1,a,b;
    int count=0;
    do {
        count=0;
        for(int i=0;i<n;i++){
            if(p[i]==order[i]) count++;
            else break;
        }
        if(count==n) a=k;

        count=0;
        for(int i=0;i<n;i++){
            if(q[i]==order[i]) count++;
            else break;
        }
        if(count==n) b=k;
        k++;
    }while(next_permutation(order.begin(), order.end()));
    cout << abs(a-b)<<endl;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin >>p[i];
    }
    for(int i=0;i<n;i++){
        cin >>q[i];
    }
    solve();
    
    return 0;
}