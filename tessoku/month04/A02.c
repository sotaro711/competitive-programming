#include <stdio.h>

int main() {
  int N, X, A[100];
  // %d : 整数を読み取ってね、アドレスを渡す
  scanf("%d %d", &N, &X);
  for (int i = 0; i <= N - 1; i++) {
    scanf("%d", &A[i]);
  }
  for (int i = 0; i < N; i++) {
    if (A[i] == X) {
      printf("Yes\n");
      return 0;
    }
  }
  printf("No\n");
  return 0;
}