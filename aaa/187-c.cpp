#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

int main(){
    int n;
    vector <string> S(200000);
    cin>>n;
    for(int i=0;i<n;i++){
        cin >> S[i];
    }
    unordered_set<string> h(S.begin(), S.end());
    for(int i=0;i<n;i++){
        if(h.count('!'+S[i])){
            cout << S[i]<<endl;
            return 0;
        }
    }
    cout << h.count('!'+S[0])<<endl;
    cout << "satisfiable" << endl;
    return 0;
}