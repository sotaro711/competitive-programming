#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    // 区切って二次元配列に保存？
    // vectorで動的配列に？

    for (int w = 1; w < (int)S.size(); w++) {
        // vector<vector<char>> tmp1((int)S.size(), vector<char>(i, ' '))
        // 二次元配列にしなくても
        // S[c-1], S[c-1 + w], S[c-1 + 2w]...
        for (int c = 1; c <= w; c++) {
            string u = "";
            for (int j = c-1; j < (int)S.size(); j+=w) {
                u += S[j];
            }
            if (u == T) {
                cout << "Yes" << endl;
                return 0;
            }
        }
        
    }

    cout << "No" << endl;

    return 0;
}
