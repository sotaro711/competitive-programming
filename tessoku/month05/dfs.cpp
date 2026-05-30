#include<iostream>
#include<vector>
using namespace std;

int N, M;
int A[100009], B[100009];
vector<int> G[100009];
// 訪れた部分(青色)をtrueにする配列を定義
bool visited[100009];

void dfs(int pos) {
    visited[pos] = true;
    for (int i = 0; i < (int)G[pos].size(); i++) {
        int nex = G[pos][i];
        if (visited[nex] == false) dfs(nex);
    }
    return;
}

int main() {
    cin >> N >> M;
    for (int i = 1; i <= M; i++){
        cin >> A[i] >> B[i]; 
        // 入力からグラフを作成する
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }
    
    // for (int i = 1; i <= N; i++) {
    //     cout << i << ": ";
    //     // coutはvectorを直接出せない
    //     for (int j = 0; j < (int)G[i].size(); j++) {
    //         cout << G[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // 連結であるかどうか
    for (int i = 1; i <= N; i++) visited[i] = false;
    dfs(1);

    string Answer = "The graph is connected.";

    for (int i = 1; i <= N; i++){
        if (visited[i] == false) {
            Answer = "The graph is not connected.";
        }
    }

    cout << Answer << endl;

    return 0;
}