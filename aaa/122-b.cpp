#include <iostream>
#include <cstring>
#include <algorithm>
#include <math.h>
using namespace std;
using ll = long long;
int main(){
    string s;
    cin>>s;
    int r=0;
    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<=s.size();j++){
            string ss = s.substr(i, j-i);
            int c=0;
            for(int k=0;k<ss.size();k++){
                if(ss[k]=='A'||ss[k]=='C'||ss[k]=='G'||ss[k]=='T'){
                    c++;
                }
            }
            if(c==ss.size()){
                r=max(r, c);
            }
        }
    }
    cout<<r<<endl;
    return 0;
}