# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    vector<int> cla(K+1);

    // 初期化
    for (int i = 1; i <= K; i++) {
        cla[i] = 0;
    }

    // 高橋以外のクラスの人数の配列
    for (int i = 1; i <= N; i++) {
        cla[A[i]] += 1;
    }

    // cla確認
    // cout << "cla: ";
    // for (int i = 1; i <= K; i++) {
    //     cout << cla[i] << ' ';
    // }
    // cout << endl;

    // 高橋のクラスよりも多い人数のクラスがない時喜ぶ
    // 高橋のクラスが一番大きかったら喜ぶ

    int ans = 0;
    for (int i = 1; i <= K; i++) {
        cla[i] += 1;
        // for (int j = 1; j <= K; j++) {
        //     if (cla[i] < cla[j]) {
        //         break;
        //     }
        //     ans++;
        // }
        // cla[i] -= 1;

        // 高橋を加えた後の一番人数の多いクラスを探す
        // それが高橋のクラスよりも大きかったらans++

        // これだとO(K^2/)
        auto max = *max_element(cla.begin() + 1, cla.end());


        // cout << "max: " << max << endl; 
        // int index = distance(cla.begin(), max);
        if (cla[i] == max) ans++;
        cla[i] -= 1;
    }

    cout << ans << endl;

    return 0;
}
