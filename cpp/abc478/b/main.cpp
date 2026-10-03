#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, V;
    cin >> N >> V;

    vector<int> W(N+1);
    for (int i = 1; i<= N; i++) {
        cin >> W[i];
    }

    // 全探索でいける
    // i = Nの時、j <= N+1でチェックされてるから配列外参照にはならない
    // 全探索。。！
    int ans = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = i+1; j <= N; j++) {
            for (int k = j+1; k <= N; k++) {
                if (i+j+k <= V) {
                    ans = max(ans, W[i] + W[j] + W[k]);
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}
