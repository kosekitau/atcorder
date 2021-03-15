#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    long long a[110000], b[110000],c[110000];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++) cin>>c[i];
    sort(a,a+n);sort(b,b+n);sort(c,c+n);

    long long s=0;
    for(int i=0;i<n;i++){
        long long d=lower_bound(a, a+n, b[i])-a;
        long long e=lower_bound(c, c+n, b[i]+1)-c;
        s+=d*(n-e);
    }
    cout<<s<<endl;
    return 0;
}