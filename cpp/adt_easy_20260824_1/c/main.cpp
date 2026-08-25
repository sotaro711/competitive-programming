#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> A(N+1);
    queue<int> Q;
    // 配列に保存してからqueueにpushする
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        Q.push(A[i]);
    }

    int ans = 0;
    int tmp = K;
    while (!Q.empty()) {
        // アトラクションに何人入っているか保持、定数で良さそうか？
        // 乗った分Kを引けば良さそうか
        int initial = Q.front();
        if (tmp >= initial) {
            tmp -= initial;
            Q.pop();
        } else {
            ans++;
            tmp = K;
        }
    }
    
    ans++;

    cout << ans << endl;

    return 0;
}
