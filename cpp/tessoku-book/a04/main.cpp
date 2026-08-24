#include <bits/stdc++.h>
using namespace std;

// ユークリッド互除法で進めていく
// 左辺が0になるまで
// r を配列で保存？
// y1 = 2b_1 + r
// x1 = 2b_2 + r

int N;
// 配列を
vector<int> ans;

int main() {
    cin >> N;

    int y;
    y = N;
    while(y != 0) {
        int r = y % 2;
        ans.push_back(r);
        y = y / 2;
    }

    // 配列を10桁にする
    while (ans.size() < 10) {
        ans.push_back(0);
    }

    // 出力
    // 逆から出して、10桁じゃなかったら0をつけて10桁にする
    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i];
    }
    cout << endl;

    

    return 0;
}
