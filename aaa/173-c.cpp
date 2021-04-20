#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int h,w,k;
    
    cin>>h>>w>>k;
    char c[6][6];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>c[i][j];
        }
    }
    
    int r=0;
    for(int bith=0;bith<(1<<h);bith++){
        for(int bitw=0;bitw<(1<<w);bitw++){
            int s=0;
            for(int i=0;i<h;i++){
                for(int j=0;j<w;j++){
                    if( (bith&(1<<i))==0 && (bitw&(1<<j))==0 && c[i][j]=='#' ) s++;
                }
            }
            if(s==k) r++;
        }
    }
    cout<< r <<endl;
    return 0;
}