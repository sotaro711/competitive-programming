#include<iostream>
#include<queue>
#include<vector>
using namespace std;

// 頂点１から隣接する頂点に番号をつける
// 全てつけたら、一番小さいところから逆算
// キューを使った実装が一般的
// 頂点１からxまでの最短経路長の確定ちをdist[] = ? に初期化する
// キューに頂点1を追加し、dist[1] = 0にする
// キューが空になるまで以下の手続きをする
// ・キューの先頭要素posを取得し、それを削除する
// ・posと隣接する全てに未確定頂点toに対し、dist[to] = dist[pos] + 1 に変更した後、キューにtoを追加するという操作を行う
// vector: サイズが動的な配列。queueはすでに動的
// グラフの隣接リストにvectorを使用

// まずは入力から木を作成
// distance

int N, M, A[100009], B[100009];
int dist[100009];
vector<int> G[100009];
queue<int> Q;

int main() {
    cin >> N >> M;
    for (int i = 1; i <= M; i++){
        cin >> A[i] >> B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    };

    for (int i = 1; i <= N; i++) {
        dist[i] = -1;
    }
    Q.push(1);
    dist[1] = 0;

    while (!Q.empty()) {
        // position
        int pos = Q.front(); 
        Q.pop();
        // popしたら、posに隣接している要素を見る
        // size型が帰ってくるのでキャスト
        for (int j = 0; j < (int)G[pos].size(); j++) {
            int to = G[pos][j];
            if (dist[to] == -1) {
                dist[to] = dist[pos] + 1;
                Q.push(to);
            }
        }
    }

    for (int i = 1; i <= N; i++) cout << dist[i] << endl;
    return 0;
    
}