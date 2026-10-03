#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> A(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    vector<int> top;
    // vector<int> three[3];

  
    for (int k = 1; k <= N; k++) {
        // pushbackしてtmp全ての要素を見て降順にしている
        top.push_back(A[k]);
        sort(top.rbegin(), top.rend());

        // O(1)で、上位3つのみを持つ配列を作ってsort
        if (top.size() > 3) top.pop_back();
        if (top.size() >= 3) cout << top[2] << endl;
        // top[k] = A[k];

        // sortの範囲を抑える？
        // いやsortが遅いんやな
        // 
        // sort(top.begin()+1, top.begin() + k+1 , greater<int>());



        
        // for (int j = 1; j <= k; j++) {
        //     if (top[j] < A[k]) {
        //         top.insert(top.begin() + j, A[k]);
        //     }
        // } 

        // A[1..k]の中で3番目に大きい値のみなので絶b隊をソートする必要はない -> 上位3つだけを持っていればいい
        // 
    
        // cout << "top: ";
        // for (int i = 1; i <= k; i++) {
        //     cout << top[i] << ' ';
        // }
        // cout << endl;

        // cout << top[3] << endl;
    }
    return 0;
}
