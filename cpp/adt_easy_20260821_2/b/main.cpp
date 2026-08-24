#include <bits/stdc++.h>
using namespace std;

int X;
int main() {
    cin >> X;

    // まずその硬貨よりも小さい場合はありえない
    // その硬貨の倍数であるかどうかで判断か

    if (X < 100) {
        cout << "No" << endl;
        return 0;
    }

    if (X % 100 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
