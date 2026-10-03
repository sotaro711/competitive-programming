#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    if (S.back() == 'e') {
        S.push_back('r');
    } else {
        S.push_back('e');
        S.push_back('r');
    }

    cout << S << endl;
    return 0;
}
