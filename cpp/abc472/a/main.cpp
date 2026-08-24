#include <bits/stdc++.h>
using namespace std;

string S;
int main() {
    cin >> S;

    for (int i = 0; i < (int)S.size(); i++) {
        if (S[i] != 'A') {
            S[i] = '.';
        }
    }

    cout << S << endl;
    return 0;
}
