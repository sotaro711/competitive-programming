#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int N, M, A[100009], B[100009], dist[100005];
vector<int> G[100009];
queue<int> Q;

int main() {
    cin >> N >> M;
    for (int i = 1; i <= M; i++){
        cin >> A[i] >> B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    // 点と点の距離をdist[i] = -1 に初期化
    // queueを使ってbfsを実装する

    for (int i = 1; i <= N; i++) dist[i] = -1;

    dist[1] = 0;
    Q.push(1);

    while(!Q.empty()) {
        int pos = Q.front();
        Q.pop();
        for (int i = 0; i <= (int)G[pos].size(); i++) {
            // int pos = Q.front();
            // Q.pop();
            int to = G[pos][i];
            // posの次が-1（未訪問）だったらdist[to] = dist[pos] + 1にする
            if (dist[to] == -1) {
                dist[to] = dist[pos] + 1;
                Q.push(to);
            }
        }
    }

    for (int i = 1; i <= N; i++) cout << dist[i] << endl;

    return 0;
}

