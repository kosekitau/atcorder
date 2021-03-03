#include <iostream>
using namespace std;
int main(){
    int N,Q;
    int query[200000][2];
    int imemo[200000], jmemo[200000];
    cin>>n>>q;
    for(int i=0;i<q;i++){
        cin>>query[i][0]>>query[i][1];
    }
    for(int i=0;i<n;i++){
        imemo[i]=n-1;
        jmemo[i]=n-1;
    }
    int s=(n-2)*(n-2);
    for(int i=0;i<q;i++){
        //縦に変えていく
        if(query[i][0]==1){
            for()
        }
        query[i][0]>>query[i][1];
    }

    cout << s<<endl;
    return 0;
}