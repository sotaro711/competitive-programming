#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int Q, X[10009]; 

// 素数だったらfalse
bool isPrime(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    scanf("%d", &Q);
    for (int i = 1; i <= Q; i++) {
        scanf("%d", &X[i]);
    }
    
    // 1 or 自分のみで割り切れるか数
    // X ^ (1/ 2)まで調べれば良い
    // 全ての合成数は2以上 X ^ (1/2)以下の約数を持つ
    
    for (int i = 1; i <= Q; i++) {
        bool a = isPrime(X[i]);
        if (a) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
}