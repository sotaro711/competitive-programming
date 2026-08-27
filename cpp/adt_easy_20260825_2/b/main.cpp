#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    string S;
    cin >> S;

    bool con1 = false;
    if (N % 2 != 0) con1 = true;

    bool con2 = true;
    int tmp = (N + 1) / 2;
    // for (int i = 0; i < tmp - 1; i++) {
    //     if (S[i] != '1') {
    //         con2 = false;
    //         break;
    //     } else {
    //         con2 = true;
    //     }
    // }

    // 1を見つけたらfalseにしてbreak

    for (int i = 0; i < tmp - 1; i++) {
        if (S[i] != '1') {
            con2 = false;
            break;
        }
    }

    bool con3 = false;
    if (S[tmp - 1] == '/') con3 = true;
    bool con4 = true;
    // for (int i = tmp; i < N; i++) {
    //     if (S[i] != '2') {
    //         con4 = false;
    //         break;
    //     } else {
    //         con4 = true;
    //     }
    // }

    for (int i = tmp; i < N; i++) {
        if (S[i] != '2') {
            con4 = false;
            break;
        }
    }

    if (con1 && con2 && con3 && con4) cout << "Yes" << endl; else cout << "No" << endl;
    

    return 0;
}
