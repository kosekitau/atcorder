#include <iostream>
#include <vector>
using namespace std;
int main(){
    int h, w;
    vector <string> s(110);
    cin>>h>>w;
    for(int i=0;i<h;i++){
        cin >> s[i];
    }

    int su=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w-1;j++){
            if(s[i][j]=='.' && s[i][j+1]=='.') su++;
        }
    }
    for(int j=0;j<w;j++){
        for(int i=0;i<h-1;i++){
            if(s[i][j]=='.' && s[i+1][j]=='.') su++;
        }
    }
    cout<<su<<endl;
    return 0;
}