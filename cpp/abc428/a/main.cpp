#include <bits/stdc++.h>
using namespace std;

int main() {
    int S, A, B, X;
    cin >> S >> A >> B >> X;

    int cycle = A + B;
    int run = (X / cycle) * A + min(X % cycle, A);
    cout << S * run << endl;

    return 0;
}
