#include <iostream>
#include <algorithm>
using namespace std;


// int N;
// int A[100009], B[100009], dp[100009];
// int main() {
//     cin >> N;
//     for (int i = 2; i <= N; i++) cin >> A[i];
//     for (int i = 3; i <= N; i++) cin >> B[i];

//     // 動的計画法、dp作成
//     dp[1] = 0;
//     dp[2] = A[2];
//     for (int i = 3; i <= N; i++) {
//         dp[i] = min(dp[i-1] + A[i], dp[i-2] + B[i]);
//     }
//     cout << dp[N] << endl;
//     return 0;
// }

// int N;
// int h[100009], dp[100009];
// int main() {
//     cin >> N;
//     for (int i = 1; i <= N; i++) cin >> h[i];
//     dp[1] = 0;
//     dp[2] = abs(h[2] - h[1]);
//     for (int i = 3; i <= N; i++) {
//         dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]), dp[i-2] + abs(h[i] - h[i-2]));
//     }
//     cout << dp[N] << endl;
//     return 0;
// }

int N;
int A[100009], B[100009], dp[100009], memo[100009];

int main() {
    cin >> N;
    for (int i = 2; i <= N; i++) cin >> A[i];
    for (int i = 3; i <= N; i++) cin >> B[i];
    
    dp[1] = 0;
    dp[2] = A[2];
    int K = 0;
    for (int i = 3; i <= N; i++) {
        dp[i] = min(dp[i-1] + A[i], dp[i-2] + B[i]);
        
    }
}