#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, ac=0, wa=0,tle=0, re=0; 
    cin>>n;
    for(int i=0;i<n;i++){
        string gg;
        cin>>gg;
        if(gg=="AC") ac++;
        else if(gg=="WA") wa++;
        else if(gg=="TLE") tle++;
        else re++;
    }
    cout<<"AC x "<<ac<<endl;
    cout<<"WA x "<<wa<<endl;
    cout<<"TLE x "<<tle<<endl;
    cout<<"RE x "<<re<<endl;
    return 0;
}