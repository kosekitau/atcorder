#include <iostream>
using namespace std;

int main(){
    int n;
    int a[200001];
    //増加量と最大
    int p[200001], q[200001];
    cin>>n;
    int s=0, saidaiti=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s+=a[i];
        p[i]=s;
        //q[i]=max(s*(i+1), s*(i+1)+a[i]);
        saidaiti = max(saidaiti, p[i-1]+a[i]);
        q[i]=saidaiti;
    }
    for(int i=1;i<=n;i++){
        cout << p[i]<<" "<<q[i]<<endl;
    }
    return 0;
}