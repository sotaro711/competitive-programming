#include<iostream>
#include<vector>
using namespace std;

int N, M, A[100009], B[100009];
vector<int> G[100009];
// 訪問済みのものにtrue
// グローバルで定義すると自動的に全てfalse
bool visited[100009];

void dfs(int pos) {
    visited[pos] = true;
    for (int i = 0; i < (int)G[pos].size(); i++) {
        if (visited[G[pos][i]] == true) continue;
        int to = G[pos][i];
        // visited[i] = true;
        // 終点にきたら戻るんだっけか
        dfs(to);
    }
    return;
}

int main() {
    cin >>  N >> M;
    for (int i = 1; i <= M; i++) {
        cin >> A[i] >> B[i];
        // 木を隣接リストで表現
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    //連結であるかどうかを見る 
    dfs(1);



    // 連結か連結でないかをdfsで検索
    // 訪問済みを記録する   
    // for (int i = 1; i <= N; i++) {
    //     // pos, toを定義
    //     // posは現在地、toは次の位置
    //     int pos = G[i];
    //     for (int j = 1; j <= (int)G[i].size(); j++) {
    //         int to = 
    //     }
    // }
}