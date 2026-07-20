#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int N, M;
int A[100009], B[100009], dist[100009];
vector<int> G[100009];
queue<int> Q;

int main() {
    cin >> N >> M;
    for (int i = 1; i <= M; i++) {
        cin >> A[i]>> B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    // queueを使ってbfs実装

    // 最短距離となるdistを初期化

    for (int i = 1; i <= M; i++) {
        dist[i] = -1;
    }

    dist[1] = 0;
    Q.push(1);
    while(!Q.empty()) {
        int pos = Q.front();
        Q.pop();
        for (int i = 0; i < (int)G[i].size(); i++) {
            int to = G[pos][i];
            if (dist[to] == -1) {
                dist[to] = dist[pos] + 1;
                Q.push(to);
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        cout << dist[i] << endl;
    }
}