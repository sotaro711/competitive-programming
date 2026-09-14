#include <bits/stdc++.h>
using namespace std;

int N, K;
// サイズを指定しないとから配列になる
vector<int> A;

// T秒までに全プリンタが印刷できる合計枚数
long long count(long long T) {
    long long sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += T / A[i];
    }
    return sum;
}

int main() {
    // Ai秒ごとに1枚印刷
    cin >> N >> K;
    A.resize(N+1);

    for (int i = 1;  i <= N; i++) {
        cin >> A[i];
    }

    // 1 + 2 + 2 + 3 + 1 + 3: 10秒で10枚印刷

    // cnt配列？
    // vector<int> Cnt(K+1, 0);
    
    // これだとTLE
    // O(10^9 * N)
    // out
    // for (int i = 1; i <= K; i++) {
    //     // 時間を止めて全部のプリンタを見る
    // }

    // 時刻Tまでに全プリンタ合わせて何枚印刷できるか
    // T秒までに出す枚数はT / A_i
    // これをN台分たす
    // 合計がK以上になる最小のTを求める
    // T秒までの合計枚数がO(N)で求められる

    long long left = 0;
    long long right = 10e9;

    while(right - left > 1) {
        long long mid = (right + left) / 2;

        if (count(mid) >= K) {
            right  = mid;
        }

        if (count(mid) < K) {
            left = mid;
        }
    }

    cout << right << endl;


    return 0;
}
