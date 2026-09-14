#include <bits/stdc++.h>
using namespace std;

vector<int> P;
vector<vector<int>> G;
vector<int> depth;

// dfsの関数
// 子の深さ =　親の深さ + 1
// なので頂点vにきたら、vの子全部にdepth[v] + 1を書いてその子にも同じことをする

void dfs(int v) {
    // G[v]の要素を先頭から順番にcに入れて全て回す
    for (int c : G[v]) {
        depth[c] = depth[v] + 1;
        dfs(c);
    }
}

int main() {
    int N;
    cin >> N;
    P.resize(N+1);
    G.resize(N+1);
    depth.resize(N+1, 0);

    for (int i = 2; i <= N; i++) {
        cin >> P[i];
        // 親P[i]に対してiを入れて親 -> 子を表現する
        G[P[i]].push_back(i);
    }

    dfs(1);

    cout << depth[N] << endl;

    // 木構造になっている
    // 二次元配列で入れる？

    // 隣接リスト
    // dfsでNの深さを求める



    return 0;
}
