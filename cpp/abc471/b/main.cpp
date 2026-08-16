#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

// 文字列配列を走査 -> 同じ文字列をカウンタ配列に保存 -> カウンタ配列の中で一番大きい番号を出力

// 小文字に変換 -> 集計
// map["abc"]++ 
// char S[109][109];

// int main() {
//     cin >> N;
//     for (int i = 1; i <= N; i++) {
//     cin >> S[i];
//     }
     
//     for (int i = 0; i <= N; i++) {
//         cout << i << " " << S[i] << endl;
//     }

//     // 走査済みの文字列をどのように判断するか？

//     for (int i = 1; i <= N; i++) {
//         for (int j = 1; j <= N; j++) {
//             if (S[i] == S[j]) {
//                 C[i] += 1;
//             }
//         }
//     }

//     for (int i = 1; i <= N; i++) {
//         cout << C[i] << endl;
//     }
    
//     return 0;
// }


int main() {
    int N;
    cin >> N;
    map<string, int> mp;
    rep(i, N) {
        string s;
        cin >> s;
        for (int j = 0; j < (int)s.size(); j++) {
            s[j] = tolower(s[j]);
        }
        mp[s]++;
    }
    int ans = 0;
    for (auto& p : mp) {
        ans = max(ans, p.second);
    }
    cout << ans << endl;

    return 0;
}