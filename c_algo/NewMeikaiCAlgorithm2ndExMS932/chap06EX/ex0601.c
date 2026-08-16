// 演習6-1　単純交換ソート（先頭側から走査）

#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y)  do { type t = x; x = y; y = t; } while (0)

/*--- 単純交換ソート ---*/
void bubble(int a[], int n)
{
	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < i; j++)
			if (a[j] > a[j + 1])
				swap(int, a[j], a[j + 1]);
	}
}

int main(void)
{
	int nx;

	puts("単純交換ソート");
	printf("要素数 : ");
	scanf("%d", &nx);
	int *x = calloc(nx, sizeof(int));	// 要素数nxのint型配列xを生成

	for (int i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	bubble(x, nx);						// 配列xを単純交換ソート

	puts("昇順にソートしました。");
	for (int i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x);							// 配列xを破棄

	return 0;
}
