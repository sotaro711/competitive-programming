#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    // cout << "S: " << S << endl;
    for (int i = 0; i < S.size(); i++) {
        if (isdigit(S[i]) == 1) cout << S[i];
    }
    return 0;
}