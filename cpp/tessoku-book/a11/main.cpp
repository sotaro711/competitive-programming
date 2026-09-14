#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> A(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    // 二分探索
    // ソート済みの配列から値を探す
    // 半分に切って大きいか小さいかを判断

    // 左端l, 右端r, 真ん中 m = (l + r) / 2の３つを持ってmの値と比べてlかrかを動かす
    int l = 1;
    int r = N;
    while (l <= r) {
        int m = (l + r) / 2;
        if (A[m] == X) {
            cout << m << endl;
            break;
        }

        if (X < A[m]) {
            r = m - 1;
        }

        if (X > A[m]) {
            l = m + 1;
        }


    }
    return 0;
}
