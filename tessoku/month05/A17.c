#include<stdio.h>

int main() {
    int N, A[100009], B[100009], dp[100009], Ans[100009], len = 0;

    scanf("%d", &N);
    for (int i = 2; i <= N; i++) {
        scanf("%d", &A[i]);
    };
    for (int i = 3; i <= N ; i++){
        scanf("%d", &B[i]);
    };

    dp[1] = 0;
    dp[2] = A[2];
    
    for (int i = 3; i <= N; i++) {
        if(dp[i-1] + A[i] <= dp[i-2] + B[i]) {
            dp[i] = dp[i-1] + A[i];
        } else {
            dp[i] = dp[i-2] + B[i];
        };
    }

    // printf("%d", dp[N]);

    // dpで最小コストを求めた後。その値はどこから来たのかを逆値は値はどこから来たのかを逆向きに辿る
    // for (int i = N; i = 1; i--) {
    //     if(dp[i] == dp[i-1] + A[i]){
    //         Ans[i] = i-1;
    //     } else {
    //         Ans[i] = i-2;
    //     }
    // } 
    int Place = N;
    while(1) {
        // lenは配列の要素をカウントするカウンタ
        Ans[len++] = Place;
        if(Place == 1) break;
        if(dp[Place] == dp[Place-1] + A[Place]) Place = Place - 1;
        else Place = Place - 2;
    }

    printf("%d\n", len);
    for (int i = len-1; i >= 0; i--) {
        if(i < len - 1) printf(" ");
        printf("%d", Ans[i]);
    }
}