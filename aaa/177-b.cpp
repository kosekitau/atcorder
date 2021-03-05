#include <iostream>
using namespace std;
int gg(string T, string S){
    int s=0;
    for(int i=0;i<T.size();i++){
        s+=T[i]==S[i];
    }
    return s;
}
int main(){
    string  T,S;
    cin>>S>>T;
    int mx=0;
    for(int i=0;i<S.size()-T.size()+1;i++){
        mx=max(gg(T, S.substr(i,T.size())), mx);
    }
    
    cout <<T.size()-mx<<endl;
    return 0;
}