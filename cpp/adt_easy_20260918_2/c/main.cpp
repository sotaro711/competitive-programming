#include <bits/stdc++.h>
using namespace std;

int main() {
    // double X;
    // cin >> X;

    string s;
    cin >> s;

    // 後ろから見る
    // 0だったら消す
    // 小数点の後の整数部分0だったら全部消す
    // string: 文字列の可変長配列
    // vector<char>

    while(s.back() == '0') {
        s.pop_back();
        if (s.back() == '.') {
            s.pop_back();
            break;
        }
    }

    cout << s << endl;

    return 0;
}
