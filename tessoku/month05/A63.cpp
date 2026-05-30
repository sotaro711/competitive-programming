#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int N, M, A[100009], B[100009], dist[100009];
vector<int> G[100009];
queue<int> Q;

int main() {
    cin >> N >> M;

    // 入力を無向木にする
    for (int i = 1; i <= M; i++) { 
        cin >> A[i] >> B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    };



    // queueを使う気がする
    // 距離をdist[] = -1に初期化して距離を定義
    // dist[0] = 0
    // 隣り合っているnodeを見て、距離を確定してqueueに入れる

    for (int i = 0; i <= N; i++) dist[i] = -1;
    dist[1] = 0;
    Q.push(1);

    // pos: 現在位置、to: 隣接node
    // vectorは1次元でも2次元でも表せる
    // posは何番目の木の要素か、toはposの隣接している要素か
    while(!Q.empty()) {
        int pos = Q.front();
        Q.pop();
        for (int i = 0; i < (int)G[pos].size(); i++) {
            int to = G[pos][i];
            if (dist[to] == -1) {
                dist[to] = dist[pos] + 1;
                Q.push(to);
            }
        }

        // for (int i = 1; i <= M; i++) {
        //     for (int j = 1; j <= (int)G[i].size(); j++) {
        //         // distとtoを一つに束ねられる
        //         int to = 
        //         if (dist[to] == -1) {
        //             dist[to] = dist[to] + 1;
        //             Q.push(to)
        //         }
        //     }
        // }
    }

    for (int i = 1; i <= N; i++) {
        cout << dist[i] << endl;
    }

    return 0;
}