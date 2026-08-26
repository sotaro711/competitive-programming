#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<int>> A(H+1, vector<int>(W+1, 0));
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cin >> A[i][j];
        }
    }

    vector<vector<int>> B(W+1, vector<int>(H+1, 0));
    for (int i = 1; i <= W; i++) {
        for (int j = 1; j <= H; j++) {
            B[i][j] = A[j][i];
        }
    }

    for (int i = 1; i <= W; i++) {
        for (int j = 1; j <= H; j++) {
            cout << B[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
