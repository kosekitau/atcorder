#include <cstdio>
#include <iostream>
using namespace std;

//BCの金の組みあわせ
int a,b,c,x;
int bc[51*51];

bool binary_search(int y){
    int l=0, r=(b+1)*(c+1);
    int sum=0;
    while(r-l>=1){
        int i=(l+r)/2;//真ん中を求める
        if(bc[i]==y) return true;
        else if(bc[i]<y) l=i+1;
        else r=i;
    }
    return false;
}

int solve(){
    int sum = 0;
    //bcの準備
    for(int i=0;i<=b;i++){
        for(int j=0;j<=c;j++)
            bc[i*(c+1)+j] = 100*i+50*j;
    }
    sort(bc, bc+(b+1)*(c+1));

    //for(int i=0;i<=(b+1)*(c+1);i++)
    //    cout << bc[i]<< ' ';

    for(int i=0;i<=a;i++)
        if(binary_search(x-500*i)) sum+=1;

    return sum;
}

int main(){
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> x;
    cout << solve()<< endl;
    return 0;
}