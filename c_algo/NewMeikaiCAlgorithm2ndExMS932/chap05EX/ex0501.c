// 演習5-1　階乗値を非再帰的に求める

#include <stdio.h>

/*--- 整数値nの階乗を返却 ---*/
int factorial(int n)
{
	int fact = 1;

	while (n > 1)
		fact *= n--;
	return fact;
}

int main(void)
{
	int x;

	printf("整数を入力せよ：");
	scanf("%d", &x);

	printf("%dの階乗は%dです。\n", x, factorial(x));

	return 0;
}
