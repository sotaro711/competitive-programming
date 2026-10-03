#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> S(N+1);
    vector<string> T(M+1);

    for (int i = 1; i <= N; i++) {
        cin >> S[i];
    }

    for (int i = 1; i <= M; i++) {
        cin >> T[i];
    }

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        string tmp;
        for (int j = 3; j <= 5; j++) {
            tmp += S[i][j];
        }
        // cout << tmp << endl;

        for (int j = 1; j <= M; j++) {
            if (tmp == T[j]) {
                ans++;
                // breakはif関係なくfor文を一つだけ抜ける
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
