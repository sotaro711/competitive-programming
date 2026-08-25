#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int takahashiTime = A * 60 * 60 + B * 60;
    int aokiTime = C * 60 * 60 + D * 60 + 1 * 1;

    // cout << "TakahashiTime: " << takahashiTime << endl;
    // cout << "aokiTime: " << aokiTime << endl;


    // // if (A == 0 && )


    if (aokiTime > takahashiTime) cout << "Takahashi" << endl; else cout << "Aoki" << endl;
    return 0;
}
