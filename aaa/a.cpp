#include <iostream>
using namespace std;

int main(){
    int a[8]={0,5,3,6,7,1,2,4};
    int tmp;


    for(int i=0;i<7;i++){
        for(int j=i+1;j>0;j--){
            if(a[j-1]>a[j]){
                tmp=a[j];
                a[j]=a[j-1];
                a[j-1]=tmp;
            }
        }
    }

    for(int i=0;i<8;i++) cout<<a[i]<<' ';
    cout<<endl;

    return 0;
}