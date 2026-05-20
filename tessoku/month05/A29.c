#include<stdio.h>

long long a, b;

int Power(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if(exp & 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

// & : ビット　AND演算子
// expの最下位ビットが１ならtrue => 奇数だったらtrue

int main() {
    scanf("%d %d", a, b);
    
    
}