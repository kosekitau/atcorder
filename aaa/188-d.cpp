#include <iostream>
#include <vector>
using namespace std;
//using ll = long long;

int main(){
    int N, C;
    cin >>N>>C;
    vector<pair<int, int> > event;
    //Nはサービスの個数
    for(int i=0;i<N;i++){
        int a,b,c;
        cin >>a>>b>>c;
        event.emplace_back(a-1, c);
        event.emplace_back(b, -c);
    }
    sort(event.begin(), event.end());
    //cout << event.begin()<<endl;
    int ans=0, fee=0, t=0;
    for(auto [x,y] : event){
        //同日の話ならスルー
        if(x!=t){
            ans+=min(C, fee)*(x-t);
            t=x;
        }
        //次の日に発生する料金、1日前に料金upの設定
        fee+=y;
    }
    cout <<ans<<endl;
    return 0;
}