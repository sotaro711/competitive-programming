#include <bits/stdc++.h>
using namespace std;

int N, X, A[109];
int main() {
    cin >> N >> X;
    bool ans = false;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        if (A[i] == X) ans = true;
    }

    // bool ans = false;
    // for (int i = 1; 1 <= N; i++) {
    //     if (A[i] == X) ans = true;
    // }

    if (ans == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
