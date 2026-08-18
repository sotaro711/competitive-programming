#include <bits/stdc++.h>
using namespace std;

int N, M, A[500009], B[500009];
int main() {
    // N: 注文の件数
    // M: 部品の種類数
    cin >> N >> M;

    // 各注文で納品すべき製品数
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    // 各部品の初期在庫数
    long long mn = LLONG_MAX;
    for (int i = 1; i <= M; i++) {
        cin >> B[i];
        mn = min(mn, (long long)B[i]);
    }

    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        if (mn >= A[i]) {
            mn -= A[i];
            cnt++;
        }
    }

    cout << cnt << endl;
    // 在庫を配列で保存して、A[i]を回すたびに減らしていく
    // 0いかになったら止めてその時の個数を出す
    // 配列をどう減らしていくか
    // int sum = 0;
    // for (int i = 1; i <= N; i++) {
    //     for (int j = 1; j <= M; j++) {
    //         B[j] -= A[i];
    //         if (B[j] <= 0) break;
    //         sum += 1;
    //     }
    // }


    return 0;
}
