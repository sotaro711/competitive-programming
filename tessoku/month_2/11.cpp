// C++は必要なものを組み込む
// printとか使えるようにする
#include <iostream>
using namespace std;

// int main() {
//     int N;
//     cin >> N;
//     cout << N * N << endl;
//     return 0;
// }

// int N, X, A[109];
// bool Ansewr = false;

// int main() {
//     cin >> N >> X;
//     for (int i = 1; i <= N; i++) cin >> A[i];
    
//     // 全探索
//     for (int i = 1; i <= N; i++) {
//         if (A[i] == X) Ansewr = true;
//     }

//     // 出力
//     if (Ansewr == true) cout << "Yes" << endl;
//     else cout << "No" << endl;
//     return 0;
// }

// int N, K, P[109], Q[109];
// bool Answer;
// int main() {
//     cin >> N >> K;
//     for (int i = 1; i <= N; i++) cin >> P[i];
//     for (int i = 1; i <= N; i++) cin >> Q[i];

//     for (int i = 1; i <= N; i++) {
//         for (int j = 1; j <= N; j++) {
//             if (P[i] + Q[j] == K) {
//                 cout << "Yes" << endl;
//                 return 0;
//             }
//         };
//     };

//     cout << "No" << endl;
//     return 0;
// }


int N;
int main() {
    cin >> N;
    for (int x = 9; x >= 0; x--) {
        // 2のx乗
        // ビット列を左に1つずらす
        int wari = (1 << x);
        cout << (N / wari) % 2;
    }
    cout << endl;
    return 0;
}
