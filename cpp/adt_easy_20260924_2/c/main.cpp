#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S;
    cin >> T;

    // cout << (int)'a' << (int)'b' << ('d' - 'a');
    // Kを決める
    // 一つでも違ったらNo

    int K = (S[1] - T[1] + 26) % 26;
    for (int i = 1; i < (int)S.size(); i++) {
        if ((S[i] - T[i] + 26) % 26 != K) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
