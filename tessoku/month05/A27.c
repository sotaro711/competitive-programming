#include<stdio.h>

int main() {
    // long longは10^10以上でok
    int A, B, r = 1;

    scanf("%d %d", &A, &B);

    while (r != 0) {
        r = A % B;
        A = B;
        B = r;



        if (r == 0) {
            printf("%d", A);
        }
    }
}