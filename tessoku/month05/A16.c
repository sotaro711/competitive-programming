#include<stdio.h>

#define min(a, b) ((a) < (b) ? (a) : (b))

int main() {
    int N;
    int A[100009], B[100009], dp[100009];

    scanf("%d", &N);
    for (int i = 2; i <= N; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 3; i <= N; i++) {
        scanf("%d", &B[i]);
    }

    A[1] = 0;
    dp[1] = 0;
    dp[2] = A[2];
    for (int i = 3; i <= N; i++) {
        dp[i] = min(dp[i-2]+B[i], dp[i-1]+A[i]);
    }    
    printf("%d\n", dp[N]);
}