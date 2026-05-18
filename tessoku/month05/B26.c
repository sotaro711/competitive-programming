// エラトステネスの篩
#include<stdio.h>
#include<stdbool.h>

int Q, X[10009], N = 300000;
// 整数X[i]が消される場合に限りtrueにする
bool Deleted[300009];

// Nまでの全部の数の中で素数を見つけておく
// その中で素数のものを出力する

// falseはまだ見たいない（素数だとみなす）
int main() {
    scanf("%d", &Q);
    for (int i = 1; i <= Q; i++) {
        scanf("%d", &X[i]);
    }
    
    for (int i = 2; i<= N; i++) {
        Deleted[i] = false;
    }

    for (int i = 2; i * i <= N; i++) {
        if (Deleted[i] == true) continue;
        for (int j = 2*i; j <= N; j += i) {
            Deleted[j] = true;
        }
    }

    for (int i = 1; i <= Q; i++) {
        if (Deleted[X[i]] == false) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
}