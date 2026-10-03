#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, K;

    cin >> N >> K;
    vector<int> A(N+1);

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    long long l = 1;
    long long r = 1;

    long long ans = 0;
    // for (int i = 1; i <= N; i++) {
        // if (A[r+1] - A[l] <= K) {
        //     ans++;
        // } else {
        //     l++;
        // }
    // }

    while(l != N) {
        if (A[r+1] - A[l] <= K && r < N) {
            r++;
        } else {
            ans += r - l;
            l++;
        }
    }   

    cout << ans << endl;

    return 0;
}
