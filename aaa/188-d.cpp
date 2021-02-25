#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main(void){
    int N;
    long long C;
    cin>>N>>C;
    long long a,b,c;
    vector<pair <long long, long long> > event;
    for(int i=0;i<N;i++){
        cin>>a>>b>>c;
        event.push_back(make_pair(a-1,c));
        event.push_back(make_pair(b,-c));
    }
    sort(event.begin(), event.end());

    long long day=0, s=0, k=0;
    for(auto [x,y] : event){
        //x日目に払う料金が決まる
        if(x!=day){
            s+=min(k, C)*(x-day);
            day=x;
        }
        k+=y;
    }
    cout << s<<endl;
    return 0;   
}