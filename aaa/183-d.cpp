#include<map>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int N,W;
    cin>>N>>W;
    vector<pair<int, int> > event;
    int s,t,p;
    for(int i=0;i<N;i++){
        cin>>s>>t>>p;
        event.push_back(make_pair(s,p));
        event.push_back(make_pair(t,-p));
    }
    sort(event.begin(), event.end());
    int water=0;
    for(auto [x,y] : event){
        if(W<water){
            cout << "No"<<endl;
            return 0;
        }
        water+=y;
    }
    cout << "Yes"<<endl;
    return 0;
}