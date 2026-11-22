#include <bits/stdc++.h>
using namespace std;

int hun, ten, one;
int main() {
    int N;
    cin >> N;

    // 1, 10, 100円の硬貨と1000円の紙幣

    vector<int> A(N+1);


    for (int i = 1; i <= N; i++) {
        cin >> A[i];

        // A[i]より大きい最小の紙幣
        // 切り上げ割算の定石を使う
        // シンプル999足して割れば切り上げができる
        // 1000たすとシンプルにあがってしまう
        int need = ((A[i] + 999) / 1000) * 1000;
        int otsuri = need - A[i];
        hun += otsuri / 100;
        ten += (otsuri / 10) % 10;
        one += otsuri % 10;
    }

    // お釣りでもらった硬貨の枚数を出力
    cout << one << ' '<< ten << ' ' << hun << endl;
    return 0;
}
