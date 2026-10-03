#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, V;
    cin >> N >> V;

    vector<pair<int, int>> W(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> W[i].first;
        W[i].second = i;
    }

    sort(W.begin(), W.end());

    for (int i = 1; i <= N; i++) cout << '{' << W[i].first << "," << W[i].second << "}" << endl;

    int ans = 0;
    for (int i = N; i >= 1; i--) {
        V = V - W[i].second;
        if (V >= 0) {
            ans += W[i].first;
        } else {
            V = V + W[i].second;
            continue;
        }
    }

    cout << ans << endl;
    return 0;
}
