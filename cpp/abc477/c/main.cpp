#include <bits/stdc++.h>
using namespace std;

// queryごとに部分文字列を作って検索している
// 最悪O(Q * abs(S))
// (2 * 10^5) * (4 * 10^5)

// クエリの前に前処理して各クエリはO(1) or O(logn)で探せるようにする

// TがSの中に出現する開始位置はクエリとは無関係に最初に全部列挙できる
// クエリ(L, R)の答えがYesになる条件は、
// 出現位置Pのうち、L <= p かつ p + |T| - 1 <= R？？？

int main() {
    int Q;
    cin >> Q;

    string S;
    string T;
    cin >> S;
    cin >> T;

    vector<vector<int>> query(Q+1, vector<int>(2));
    for (int i = 1; i <= Q; i++) {
        cin >> query[i][0] >> query[i][1];
    }

    

    return 0;
}
