#include <bits/stdc++.h>
using namespace std;

int main() {
    // 同じカードを取り除く
    int N; 
    cin >> N;

    vector<int> A(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for (int i = 1; i <= N; i++) {
        for (int j = i+1; j <= N; j++) {
            if (A[i] == A[j]) {
                A[i] = 0;
                A[j] = 0;
                break;
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        ans += A[i];
    }

    cout << ans << endl;

    return 0;
}
