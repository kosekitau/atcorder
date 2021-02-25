#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<pair<int, int>> cond(M);
    for(auto& [A, B] : cond) cin >> A >> B;
    int K;
    cin >> K;
    vector<pair<int, int>> choice(K);
    for(auto& [C, D] : choice) cin >> C >> D;
    
    int ans = 0;
    for(int bit = 0; bit < 1 << K; bit++){
        vector<bool> ball(N);
        for(int i = 0; i < K; i++){
            const auto [C, D] = choice[i];
            //bitにおいて1ならCに皿を、0ならDに皿を置く
            ball[bit & 1 << i ? C : D] = 1;
        }
        int cnt = 0;
        //各条件を満たすか
        for(auto [A, B] : cond) if(ball[A] && ball[B]) cnt++;
        if(ans < cnt) ans = cnt;
    }
    cout << ans << endl;
}
