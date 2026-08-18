#include <bits/stdc++.h>
using namespace std;

// R S -> Yes
int main() {
    string S;
    cin >> S;

    int Mi, Ri;
    for (int i = 0; i <= (int)S.size(); i++) {
        // インデックスを保存
        if (S[i] == 'R') {
            Ri = i;
        }
        
        if (S[i] == 'M') {
            Mi = i;
        }
    }

    if (Ri < Mi) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
