// 演習5-3　配列の全要素の最大公約数値を求める

#include <stdio.h>

/*--- 整数値x, yの最大公約数を返却する ---*/
int gcd(int x, int y)
{
	if (y == 0)
		return (x);
	else
		return (gcd(y, x % y));
}

/*--- 要素数nの配列aの全要素の最大公約数を求める ---*/
int gcd_array(const int a[], int n)
{
	if (n == 1)
		return (a[0]);
	else if (n == 2)
		return (gcd(a[0], a[1]));
	else
		return (gcd(a[0], gcd_array(&a[1], n - 1)));
}

int main(void)
{
	int nx;

	printf("要素数 : ");
	scanf("%d", &nx);
	int *x = calloc(nx, sizeof(int));	// 要素数nxのint型配列xを生成

	for (int i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	printf("最大公約数は%dです。\n", gcd_array(x, nx));

	free(x);							// 配列を破棄

	return 0;
}
