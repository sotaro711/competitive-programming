#include <bits/stdc++.h>
using namespace std;

int N;
string S;
map<string, int> mp;

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> S;
        // 文字を小文字にする
        for (int j = 0; j < (int)S.size(); j++) {
            S[j] = tolower(S[j]);
        }
        // 連想配列で保存 -> 同じ文字が出たら増やす
        mp[S] += 1;
    }

    // mapに入っている要素を一個ずつ見る
    // map自体にインデックスはないので for (int i = 0; i <= N; i++)みたいな書き方はできない
    // map自身に次、その次とたどらせる必要がある


    int ans = 0;
    for (auto [key, val] : mp) {
        ans = max(ans, val);
    }

    cout << ans << endl;

    return 0;
}
