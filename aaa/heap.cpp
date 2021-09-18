#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#include <set>
using namespace std;
using ll = long long;
using Graph = vector<vector<int> >;
using P = pair<int, int>;
#define INF 2000000003
#define MOD 1000000007

struct Heap {
    vector<int> heap;
    Heap() {}

    //新しい値を挿入する、一旦末尾に入れて大きいやつ現れるまで登る。
    void push(int x){
        heap.push_back(x);
        int i=(int)heap.size()-1;//pushされた場所
        while(i > 0){
            int p=(i-1)/2; //親を求める
            if (heap[p]>=x) break;
            heap[i]=heap[p];//xが親より大きい
            i=p;
        }
        heap[i]=x;
    }

    //最大値をもってくる
    int top(){
        if(!heap.empty()) return heap[0];
        else return -1;

    }

    //最大値を削除する
    void pop(){
        if(heap.empty()) return ;
        int x=heap.back();//とりあえず配列の末尾をもってくる
        heap.pop_back();
        int i=0;//iは現在地
        //根の深さより浅いまで、大きい子の方へ降りていく
        while(i*2+1<(int)heap.size()){
            int child1=i*2+1, child2=i*2+2;
            //子供同士を比較して大きい方をchild1とする
            if(child2<(int)heap.size()
                && heap[child2]>heap[child1]){
                    child1=child2;
            }
            //子の方が小さくなったら終わり
            if(heap[child1]<=x) break;
            heap[i]=heap[child1];
            i=child1;
        }
        heap[i]=x;
    }
};

int main(){
    Heap h;
    h.push(5); h.push(3); h.push(7); h.push(1);

    cout<<h.top()<<endl;
    h.pop();
    cout<<h.top()<<endl;
    h.push(11);
    cout<<h.top()<<endl;
    return 0;
}