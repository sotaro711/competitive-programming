#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> T(Q+1);
    for (int i = 1; i <= Q; i ++) {
        cin >> T[i];
    }

    // 歯が生えているかを見る配列
    vector<int> D(N+1, 1);

    for (int i = 1; i <= Q; i++) {
        if (D[T[i]] == 1) {
            D[T[i]]--;
        } else {
            D[T[i]]++;
        }
    }

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        ans += D[i];
    }

    cout << ans << endl;;

    return 0;
}
