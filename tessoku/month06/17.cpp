#include<iostream>
#include<vector>
using namespace std;

int N, M;
int A[100009], B[100009]; 
vector<int> G[100009];

int main() {
    cin >> N >> M;
    for (int i = 1; i <= M; i++) {
        cin >> A[i] >> B[i];
        G[A[i]].push_back(G[B[i]]);
        G[B[i]].push_back(G[A[i]]);
    }


}

// 1.研究開発ソフトウェアを作っているということだったが具体的にどういう技術スタックで何を作っているか
// 2. 業務で生成AIどのように使っているか