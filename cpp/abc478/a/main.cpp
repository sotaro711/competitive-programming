#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N+1, 0);

    int index = 0;
    for (int i = 1; i <= M; i++) {
        A[index]++;

        index = (index + 1) % N;
    }

    for (int i = 0; i < N; i++) cout << A[i] << endl;
    return 0;
}
