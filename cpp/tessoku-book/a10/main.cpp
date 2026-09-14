#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    int D;
    cin >> D;

    vector<int> L(D+1), R(D+1);
    for (int i = 1; i <= D; i++) {
        cin >> L[i] >> R[i];
    }

    // max(1 ~ (L-1)号室の最大人数, (R+1) ~ N号室の最大人数)
    // ぞれぞれのmaxを求めた後その二つでmaxをとる

    vector<int> P(N+1), Q(N+1);
    // 最大値を累積的に求める

    P[1] = A[1];
    for (int i = 2; i <= N; i++) P[i] = max(P[i-1], A[i]);

    // cout << "P: ";
    // for (int i = 1; i <= N; i++) cout << P[i] << ' ';
    // cout << endl;

    Q[N] = A[N];
    for (int i = N-1; i >= 1; i--) Q[i] = max(Q[i+1], A[i]);

    // cout << "Q: ";
    // for (int i = 1; i <= N; i++) cout << Q[i] << ' ';

    for (int i = 1; i <= D; i++) {
        cout << max(P[L[i] - 1], Q[R[i] + 1]) << endl;
    }

    return 0;
}
