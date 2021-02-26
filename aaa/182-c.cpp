#include <iostream>
#include <bitset>
using namespace std;
int main(){
    string n;
    cin>>n;
    int l=n.length();    
    int s=l,r;
    for(int bit=0;bit<(1<<l);bit++){
        int sum=0;
        for(int i=0;i<l;i++){
            //フラグ立ってたら消す
            if(!(bit & (1<<i))){
                sum+=n[i]-'0';
            }
        }
        if(sum%3==0 && sum!=0){
            r=__builtin_popcount(bit);
            s=min(s,r);
        }
    }
    if(s==l) cout << -1<<endl;
    else cout << s<<endl;
    return 0;
}