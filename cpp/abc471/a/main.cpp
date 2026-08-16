#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    int T, M, K;
    double W;
    cin >> A >> B;

    T = A + B;
    M = A - B;
    K = A * B;
    W = (double)A / (double)B;

    if (T == 9 || M == 9 || K == 9 || W == 9) {
        cout << "Nine" << endl;
    } else {
        cout << "Nein" << endl;
    }

    return 0;
}
