#include <bits/stdc++.h>
using namespace std;

string S;
// bool ans = false;
int main() {
    cin >> S;

    // 全走査で愚直に行けるか
    // if (isupper(S[0])) {
    //     ans = true;
    // } else {
    //     // ans = false;
    //     cout << "No" << endl;
    //     return 0;
    // }
    if (islower(S[0])) {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 1; i < (int)S.size(); i++) {
        if (isupper(S[i])) {
            // ans = false;
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
