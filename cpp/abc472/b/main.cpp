#include <bits/stdc++.h>
using namespace std;

int N;
int L[109];
int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> L[i];
    }

    int min = 100009;
    // for (int i = 1; i <= N; i++) {
    //     // 1番目と2-4まで足した数の差の絶対
    //     // 次は1-2を足した数、2-4を足した数の差の絶対値
    //     // 1-3を足した数、4を足した数の差の絶対値
    //     int sum1 = 0;
    //     for (int i = 1)
    // }

    int ans = 100009;
    for (int i = 1; i <= N; i++) {
        int sum1 = 0;
        int sum2 = 0;
        for (int j = 1; j <= i; j++) {
            sum1 += L[j];
        }

        for (int j = i+1; j <= N; j++) {
            sum2 += L[j];
        }

        int tmp = abs(sum1 - sum2);
        if (ans > tmp) ans = tmp; 
    }

    cout << ans << endl;

    return 0;
}
