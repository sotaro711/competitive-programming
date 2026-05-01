#include <stdio.h>

// N日間のイベント
// i日目にAi人来場
int main () {
    int N, Q;
    int A[100003];
    int L[100005], R[100005], S[100009];

    // 入力区切りにかんまを要求してしまう
    // 競プロはスペース区切り
    scanf("%d %d", &N, &Q);

    for (int i = 1; i <= N; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 1; i <= Q; i++){
        scanf("%d %d", &L[i], &R[i]);
    }

    // for (int i = 1; i <= Q; i++) {
    //     printf("%d %d\n", L[i], R[i]);
    // }

// O(NQ)よりTLEしてしまう 
    // for (int i = 1; i <= Q; i++) {
    //     int ans = 0;
    //     for (int j = L[i]; j <= R[i]; j++){
    //         ans += A[j];
    //     }
    //     printf("%d\n", ans);
    // }

    // 累積和を求めましょう
    S[0] = 0;
    for (int i = 1; i <= N; i++) {
        S[i] = S[i-1] + A[i];
    }

    for (int i = 1; i <= Q; i++) {
        printf("%d\n", S[R[i]] - S[L[i]-1]);
    }


    return 0;
}