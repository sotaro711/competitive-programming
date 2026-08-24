#include <bits/stdc++.h>
using namespace std;

int M, N;
long long K;


int main() {
    cin >> N >> M >> K;
    vector<int> A(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    long long sum = 0;
    vector<bool> eated(N+1);

    for (int i = 1; i <= N; i++) {
        if (i >= M && eated[i-M]) sum -= A[i-M];
        sum += A[i];
        if (sum <= K) {
            eated[i] = true;
        } else {
            sum -= A[i];
            eated[i] = false;
        }
    }

    for (int i = 1; i <= N; i++) {
        if (eated[i]) cout << "Yes\n"; else cout << "No\n";
    }
    return 0;
}
