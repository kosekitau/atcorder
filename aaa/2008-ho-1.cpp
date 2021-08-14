#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000001
#define MOD 1000000007
int main(){
    int n;
    cin>>n;
    int rdx=0, a[n], lc, pc, inp;
    for(int i=0;i<n;i++) a[i]=0;
    cin>>inp;
    a[rdx]++;
    lc=pc=inp;
    for(int i=1;i<n;i++){
        cin>>inp;
        if(inp==pc){
            a[rdx]++;
        }
        //奇数
        else if(i%2==0){
            rdx++;
            a[rdx]++;
            pc=inp;
        }
        else{
            if(rdx==0){
                a[rdx]++;
                lc=inp;
                pc=inp;
            }
            else{
                a[rdx-1]+=(a[rdx]+1);
                a[rdx]=0;
                rdx--;
                pc=inp;
            }
        }
    }
    int f=1;
    if(lc) f=0;

    int r=0;
    for(int i=0;i<rdx+1;i++) if((i+f)%2) r+=a[i];
    cout<<r<<endl;
    return 0;
}