#include <iostream>
#include <cstring>
#include <algorithm>
#include <math.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    int a,b,c,d,e;
    int A[3010],B[3010],C[3010],D[3010],E[3010];
    cin>>n;
    int ma=0, mb=0, mc=0,md=0,me=0;
    int ia, ib, ic,id,ie; 
    for(int i=0;i<n;i++){
        cin>>a>>b>>c>>d>>e;
        if(ma<a){
            ma=a;
            ia=i;
            A[i]=a;
        }
        if(mb<b){
            mb=b;
            ib=i;
            B[i]=b;
        }
        if(mc<c){
            mc=c;
            ic=i;
            C[i]=c;
        }
        if(md<d){
            md=d;
            id=i;
            D[i]=d;
        }
        if(me<e){
            me=e;
            ie=i;
            E[i]=e;
        }
    }
    int l[5]={ia,ib,ic,id,ie};
    int ra,rb,rc,rd,re,r,result=0;
    for(int i=0;i<3;i++){
        for(int j=i+1;j<4;j++){
            for(int k=j+1;k<5;k++){
                ra=max(A[l[k]], max(A[l[i]], A[l[j]]));
                rb=max(B[l[k]], max(B[l[i]], B[l[j]]));
                rc=max(C[l[k]], max(C[l[i]], C[l[j]]));
                rd=max(D[l[k]], max(D[l[i]], D[l[j]]));
                re=max(E[l[k]], max(E[l[i]], E[l[j]]));
                r = min(ra, min(rb, min(rc, min(rd,re))));
                result = max(r, result);
            }
        }
    }
    cout<<result<<endl;

    return 0;
}