#include <bits/stdc++.h>
using namespace std;

int N;
string S[109];
vector<pair<int, int>> ans;

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> S[i];
    }

    ans.resize(N+1);

    for (int i = 1; i <= N; i++) {
        ans[i].first = 0;
        ans[i].second = i;
    }

    // 二次元配列で結果を保存？
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < (int)S[i].size(); j++) {
            if (S[i][j] == 'o') ans[i].first--;
        }
    }

    sort(ans.begin()+1, ans.end());

    for (int i = 1; i <= N; i++) {
        cout << ans[i].second << " ";
    }

    cout << endl;

    return 0;
}
