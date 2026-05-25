#include<stdio.h>

// long long(64bit)
// int (32bit)
// scanfとビット数を合わせる必要がある
// lld -> 4bit

long long N;
int main() {
    scanf("%lld", &N);

    // int A = 3 * 5;

    // long long preans = 0;
    // long long preans2 = 0;
    // for (int i = 1; i <= N; i++) {
    //     if (i % 3 == 0) {
    //         preans += 1;
    //     }
    //     if (i % 5 == 0) {
    //         preans += 1;
    //     }
    //     if (i % 15 == 0) {
    //         preans2 += 1;
    //     }
    // }
    // long long ans = preans - preans2

    // for文で回すとTLEで終わり 

    long long A1 = N / 3;
    long long A2 = N / 5;
    long long A3 = N / 15;
    long long ans = A1 + A2 - A3;
    printf("%lld", ans);
    return 0;
}