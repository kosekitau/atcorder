#include <iostream>
using namespace std;
int main(){
    int h, w; 
    int a[100][100];
    cin>>h>>w;
    int m=101;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>a[i][j];
            if(a[i][j]<m){
                m=a[i][j];
            }
        }
    }
    int s=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(a[i][j]>m){
                s+=a[i][j]-m;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}