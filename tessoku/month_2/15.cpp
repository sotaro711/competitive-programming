// #include <iostream>
// using namespace std;

// // int N;
// // stringにするのは、格桁ずつ扱いたいから
// // int main() {
// //     string N;
// //     cin >> N;

// //     // 答えを求める
// //     int Answer = 0;
// //     for (int i = 0; i < N.size(); i++) {
// //         int keta;
// //         int kurai = (1 << (N.size() - 1 - i));
// //         if (N[i] == '0') keta = 0;
// //         if (N[i] == '1') keta = 1;
// //         Answer += kurai * keta;
// //     }

// //     cout << Answer << endl;
// //     return 0;
// // } // 2.0, 2.1, 3.0, 3.1, 3.2, 4.0 - 4.4
// // 05, 06, 07

// // int main() {
// //     int N, K;
// //      = 0;
// //     cn >> N >> K;
// //     or (int i = 1; i <= N; i++) {
// //         for (int j = 1; j <= N; j++) {
// //             int k;
// //             k = K - i - j;
// //             if (1 <= k && k <= N) {
// //                 Ans += 1;
// //             }
// //         }
// //     }
// //     ;
// //     return 0;
// // }

// // int N, Q;
// // iICNT A[100009],  ,00L[100009], R[100009], S[100009];

// int main() {
//     cin >> N >> Q;
//     for (it i  ) cin >> A[i];
//     for (j = 1; j <= Q; j++) cin >> L[j] >> R[j];
//     cout << "A: ";
//     for (int i = 1; i <= N; i++) {
//         cout << A[i] << " ";
//     }
//     cout << endl;
//     cout << "L: ";
//     for (int j = 1; j <= Q; j++) {
//         cout << L[j] << " ";
//     }
//     cout << endl;

//     cout << "R: ";
//     for (int j = 1; j <= Q; j++) {
//         cout << R[j] << " ";
//     }
//     cout << endl;

//     // 累積和の作成
//     S[0] = 0;
//     for (int k = 1; k <= N; k++) {
//         S[k] = S[k-1] + A[k];
//     }
//     cout << "S: ";
//     for (int k = 0; k <= N; k++) {
//         cout << S[k] << " ";
//     }
//     for (int l = 1; l <= Q; l++) {
//         cout << S[R[l]] - S[L[l]-1] << endl;
//     }

//     return 0;
// }

// int D, N;
// int A[10009], L[100009], R[100009], S[100009], B[100009];

// int main() {
//     cin >> D;
//     cin >> N;
//     for (int j = 1; j <= N; j++) {
//         cin >> L[j] >> R[j];
//     }
//     //  出力
//     // cout << "L: ";
//     // for (int i = 1; i <= N; i++) {
//     //     cout << L[i] << " ";
//     // }
//     // cout << endl;
//     // cout << "R: ";
//     // for (int i = 1; i <= N; i++) {
//     //     cout << R[i] << " ";
//     // }
//     // 前日比
//     for (int i = 1; i <= N; i++) {
//         S[L[i]] += 1;
//         S[R[i]+1] -= 1;
//     }

//     // cout << "S: ";
//     // for (int i = 1; i <= N; i++) {
//     //     cout << S[i] << " ";
//     // }

//     // 前日比の累積和
//     B[0] = 0;
//     for (int i; i <= D; i++) {
//     // cout << "B: ";
//     for (int i =1; i <= D; i++) {
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

