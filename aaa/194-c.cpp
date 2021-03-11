#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a, n, cnti[401]={0}, cntj[401]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        cnti[(a+200)%401]++;
        cntj[(a+200)%401]++;
        if(i==0) cnti[(a+200)%401]--;
        if(i==n-1) cntj[(a+200)%401]--;
    }
    long long s=0;
    for(int i=-200;i<=200;i++){
        for(int j=i+1;j<=200;j++){
            if(cnti[i+200] && cntj[j+200]){
                cout<< i<<' '<<j<<endl;
            }
            s+=pow(i-j, 2)*cnti[i+200]*cntj[j+200];
        }
    }    
    cout<<s<<endl;
    return 0;
}