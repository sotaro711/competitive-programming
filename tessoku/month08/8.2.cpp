#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int N, C[109];
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> C[i];
    }

    // 一番多い数（maxNumber）を特定
    // 配列で保存？
    int Cnt[109];
    for (int i; i <= 109; i++) {
        Cnt[i] = 0;
    }

    for (int i; i <= N; i++) {
        Cnt[C[i]] += 1;
    }

    int maxCount = *max_element(begin(Cnt), end(Cnt));
    int maxNumber;

    for (int i = 1; i <= N; i++) {
        if (Cnt[i] == maxCount) {
            maxNumber = i;
        } 
    }

    // for (int i = 1; i <= N; i++) {
    //     cout << Cnt[i];
    // }
    // cout << endl;
    // cout << maxNumber;
    // cout << endl;


    // 配列の中のmaxNumber以外の数字をそれに書き換える
    // 書き換える時にansに1ずつ加算してそれを出力
    
    int sum = 0;
    for(int i = 1; i <= N; i++) {
        if (C[i] != maxNumber) {
            C[i] = maxNumber;
            sum += 1;
        }
    }

    cout << sum;
    return 0;
}