#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <set>
#include <tuple>
#include <map>

using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 100000
#define MAX_N 90010

int n, m;
char A[101][101];

int battle(int round, int userA, int userB) {
    char a = A[userA][round];
    char b = A[userB][round];

    if (a == b) return -1;

    if (a == 'G' && b == 'C') return userA;
    if (a == 'C' && b == 'P') return userA;
    if (a == 'P' && b == 'G') return userA;

    return userB;
}

int main(){
    cin>>n>>m;
    
    for(int i=0;i<2*n;i++) for(int j=0;j<m;j++) cin>>A[i][j];

    int men[2*n], win[2*n];
    for(int i=0;i<2*n;i++) men[i]=i;
    for(int i=0;i<2*n;i++) win[i]=0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int res = battle(i, men[j*2], men[j*2+1]);
            if(0<=res) win[res]++;
        }
        sort(men, men+2*n, [&](int x, int y) {
			if (win[x] != win[y]) return win[x] > win[y];
			else return x < y;
		});
    }
    for(int i=0;i<2*n;i++) cout<<men[i]+1<<endl;
    return 0;
}