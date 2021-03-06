#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int g1(string n){
    vector <int>s;
    for(int i=0;i<n.size();i++){
        s.push_back(n[i]-'0');
    }
    sort(s.begin(), s.end(), greater<int>());
    int r=0;
    for(int i=0;i<n.size();i++){
        r+=s[i]*pow(10, (n.size()-i-1));
    }
    return r;
}

int g2(string n){
    vector <int>s;
    for(int i=0;i<n.size();i++){
        s.push_back(n[i]-'0');
    }
    sort(s.begin(), s.end());
    int r=0;
    for(int i=0;i<n.size();i++){
        r+=s[i]*pow(10, (n.size()-i-1));
    }
    return r;
}

int main(){
    int k;
    string n;
    vector <string> a(100000);
    cin>>n>>k;
    a[0]=n;
    for(int i=1;i<=k;i++){
        a[i]=g1(a[i-1])-g2(a[i-1]);
    }
    cout<<a[k]<<endl;
    int s;
    for(int i=0;i<n.size();i++){
        s+=pow(10, (n.size()-i-1)) * (a[k][i]-'0');
    }
    cout<< s<<endl;
    return 0;
}