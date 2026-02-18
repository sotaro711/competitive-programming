#include <iostream>
#include <algorithm>
using namespace std;


// int N, Q;
// int A[100009], X[100009];

// // int search(int x) {
// //     int pos = lower_bound(A + 1, A + N + 1, x) - A;
// //     if (pos <= N && A[pos] == x) return pos;
// //     return -1;
// // }

// int main() {
//     cin >> N;
//     for (int i = 1; i <= N; i++) cin >> A[i];
//     cin >> Q;
//     for (int i = 1; i <= Q; i++) cin >> X[i];

//     // まずはAを昇順にソート
//     sort(A + 1, A + N + 1);

//     // 一旦出力
//     // cout << "ソートずみA: " << " ";
//     // for (int i = 1; i <= N; i++) cout << A[i] << " ";

//     // 二分探索, 質問に答える
//     for (int i = 1; i <= Q; i++) {
//         // 1 <= i <= Nの間で、最小の整数iがpos1に記録
//         // N+1までなのは、範囲が 1 <= i < N + 1になるため
//         // pos1 - 1 なのは、問題文が、X[i]より小さい要素（未満）のインデックスを返すため
//         int pos1 = lower_bound(A + 1, A + N + 1, X[i]) - A;
//         cout << pos1 - 1 << endl;
//     }
    
//     return 0;
// }

long long N, K;
long long A[100009];

// 答えがx以下を判定し、x以下だったらtrue, x以上だったらfalse
bool check(long long x) {
    long long sum = 0;
    for (int i = 1; i <= N; i++) sum += x / A[i];
    if (sum >= K) return true;
    return false;
}

int main() {
    cin >> N >> K;
    for (int i = 1; i <= N; i++) cin >> A[i];

    // 二分探索
    long long Left = 1, Right = 100000;
    while (Left < Right) {
        long long Mid = (Left + Right) / 2;
        bool Ansewr = check(Mid);
        if (Ansewr == false) Left = Mid + 1;
        if (Ansewr == true) Right = Mid; 
    }
    cout << Left << endl;
}