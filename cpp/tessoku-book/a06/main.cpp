#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> A(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    vector<int> L(Q+1), R(Q+1);
    for (int i = 1; i <= Q; i++) {
        cin >> L[i] >> R[i];
    }

    // for (int i = 1; i <= Q; i++) {
    //     int sum = 0;
    //     for (int j = L[i]; i <= R[i]; j++) {
    //         sum += A[j];
    //     }
    //     cout << sum << endl;
    // }

    // 直接やるとO(NQ)で10^10となりTLE

    // 累積和
    // 先にS[i] = A[1] + A[2] + ...  + A[i]　を作成しておく (O(N))
    // [L, R]の和はS[R]-S[L]となる

    // 

    vector<int> S(N+1);
    S[1] = A[1];
    // 累積和をとる
    for (int i = 2; i <= N; i++) {
        S[i] = S[i-1] + A[i];
    }

    for (int i = 1; i <= Q; i++) {
        int ans = S[R[i]] - S[L[i]-1];
        cout << ans << endl;
    }

    // cout << "A: ";
    // for (int i = 1; i <= N; i++) {
    //     cout << A[i] << ' ';
    // }

    // cout << endl;

    // cout << "S: ";
    // for (int i = 1; i <= N; i++) {
    //     cout << S[i] << ' ';
    // }

    return 0;
}
