#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> A(N+1), B(N+1), C(N+1), D(N+1);

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for (int i = 1; i <= N; i++) {
        cin >> B[i];
    }

    for (int i = 1; i <= N; i++) {
        cin >> C[i];
    }

    for (int i = 1; i <= N; i++) {
        cin >> D[i];
    }

    // 1枚ずつ取り出して4枚合計がKになるか
    // 全探索では多分無理O(10^12)

    // サイズなしで宣言する
    vector<int> P,  Q;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            // N通りしか回らないのでP[i]だとN通りしか入らない
            // P[i] = A[i] + B[j];
            P.push_back(A[i] + B[j]);
        }
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            // Q[i] = C[i] + D[j];
            Q.push_back(C[i] + D[j]);
        }
    }

    // for (int i = 1; i <= N*N; i++) cout << P[i] << ' ';
    // cout << endl;

    // for (int i = 1; i <= N*N; i++) cout << Q[i] << ' ';
    // cout << endl;

    // 結局N*N*N*N回してるので間に合わない
    // 
    // for (int i = 0; i < (int)P.size(); i++) {
    //     for (int j = 0; j <= Q.size(); j++) {
    //         int sum = P[i] + Q[j];
    //         if (sum == K) {
    //             cout << "Yes" << endl;
    //             return 0;
    //         }
    //     }
    // }

    // Pの各要素pに対してp - KがQの中に存在するか？
    // 二分探索する
    // Qをソート
    // P - Kを計算
    // Qにあるかどうか

    bool isFind;
    sort(Q.begin(), Q.end());
    for (int i = 0; i < (int)P.size(); i++) {
        int tmp = K - P[i];
        isFind = binary_search(Q.begin(), Q.end(), tmp);

        if (isFind) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}
