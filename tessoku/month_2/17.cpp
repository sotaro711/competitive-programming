#include <iostream>
using namespace std;

// int main() {
//     int T, N;
//     int L[500009], R[500009], B[500009], S[500009];
//     cin >> T >> N;
//     for (int i = 1; i <= N; i++) {
//         cin >> L[i] >> R[i];
//     }

//     // 前日比の配列を作る
//     // L[i]番目の時はB[i] += 1, R[i]+1番目の時はB[i] -= 1
//     for (int i = 0; i <= T; i++) B[i] = 0;
//     for (int i = 1; i <= N; i++) {
//         B[L[i]] += 1;
//         B[R[i]] -= 1;
//     }

//     // Bの中身を見たい
//     // cout << "B: ";
//     // for (int j = 0; j <= T; j++) {
//     //     cout << B[j] << " ";
//     // }

//     // 累積和を作成
//     // 累積和ができていない
//     S[0] = B[0];
//     for (int i = 1; i <= T; i++) {
//         S[i] = S[i-1] + B[i];
//     }

//     for (int i = 0; i < T; i++) {
//         cout << S[i] << endl;
//     }

//     return 0;
// }
// int N, X;
// int A[100009];

// int search(int x) {
//     int L, R;
//     L = 1;
//     R = N;
//     while(L <= R) {
//         int M = (L + R)  / 2;
//         if (x < A[M]) R = M - 1;
//         if (x == A[M]) return M;
//         if (A[M] < x) L = M + 1;
//     }
//     return -1;
// }

// int main() {
//     cin >> N >> X;
//     for (int i = 1; i <= N; i++) cin >> A[i];

//     int Answer = search(X);
//     cout << Answer << endl;
//     return 0;
// }