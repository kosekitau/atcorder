#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main(){
    char x[300];
    cin>>x;
    char *i=strchr(x,'.');
    if(i) *i='\0';
    cout<<x<<endl;
    return 0;
}