#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> A(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    int U = N - K + 1;

    vector<int> B;
    for (int i = 1;  i <= U; i++) {
        vector<int> origin = A;
        for (int j = i; j <= i + K - 1; j++) {
            B.push_back(A[j]);
        }

        sort(B.begin(), B.end());

        for (int j = i; j < i + K - 1; i++) {
            int c = 0;
            origin[j] = B[c];
            c++;
        }

        if (is_sorted(A.begin(), A.end())) {
            cout << "Yes" << endl;
            return 0;
        } else{
            // 配列をリセット
            origin = A;
            continue;
        }
    }
    cout << "No" << endl;
    return 0;
}
