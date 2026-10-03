#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    string S, T;
    cin >> S >> T;

    for (int i = 0; i < N; i++) {
        if (T[i] == '*') {
            T[i] = S[i];
        }
    }

    if (T == S) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
