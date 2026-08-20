#include <bits/stdc++.h>
using namespace std;

int N;
string S, T;

// ハミング距離とは
// 
int main() {
    cin >> N;
    cin >> S;
    cin >> T;

    int ans = 0;
    for (int i = 0; i <= N; i++) {
        if (S[i] != T[i]) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
