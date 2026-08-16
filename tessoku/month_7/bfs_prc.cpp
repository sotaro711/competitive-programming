#include<iostream>
#include<queue>
using namespace std;

int N, M;
int A[100009], B[100009], dist[100009];
vector<int> G[100009];
queue<int> Q;

int main() {
   cin >> N >> M;
    for (int i = 1; i <= M; i++) {
        cin >> A[i] >> B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    // 頂点1からxまでの距離をdist[x] = ?に初期化
    // キューに頂点1を追加して、dist[1] = 0
    // キューが空になるまで以下を繰り返す
    // キューの先頭要素posを取り出して削除
    // posと隣接する全ての未確定頂点toに対し、dist[to] = dist[pos] + 1 に変更した後、queueにtoを追加するを行う
    
    // distは-1に初期化
    // distは頂点までの距離なので、Nまで回す
    for (int i = 1; i <= N; i++) dist[i] = -1;
    dist[1] = 0;
    Q.push(1);

    while (!Q.empty()) {
        int pos = Q.front(); 
        Q.pop();

        for (int i = 0; i < (int)G[pos].size(); i++) {
            int to = G[pos][i];
            if (dist[to] == -1) {
                dist[to] = dist[pos] + 1;
                Q.push(to);
            }
        }
    }

    // 出力
    // それぞれの点の距離を出力
    for (int i = 1; i <= N; i++) {
        cout << dist[i] << endl;
    }

    return 0;
    
}