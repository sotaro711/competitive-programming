#include<iostream>
#include<vector>
using namespace std;

// グラフが連結かどうか
// dfsを使って探索

int N, M;
int A[100009], B[100009];
vector<int> G[100005];
// 訪れたらtrueにする
bool visited[100009];

void dfs(int pos) {
    visited[pos] = true;

    for (int i = 0; i < (int)G[pos].size(); i++) {
        // int pos = G[n][i];
        // int nex = G[]
        int nex = G[pos][i];
        if (visited[nex] == false) dfs(nex);
    };
    return;
}

int main() {
    cin >> N >> M;
    // 隣接リストで木を表現
    for (int i = 1; i <= M; i++) {
        cin >> A[i] >> B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    dfs(1);
    string Answer = "The graph is connected.";

    for (int i = 1; i <= N; i++) {
        if (visited[i] == false) Answer = "The graph is not connected.";
    }

    cout << Answer << endl;
    return 0;
}