// 演習6-6　双方向バブルソート（シェーカーソート）

#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y)  do { type t = x; x = y; y = t; } while (0)

/*--- 双方向バブルソート（シェーカーソート）---*/
void shaker(int a[],int n)
{
	int left = 0;
	int right = n - 1;
	int last = right;

	while (left < right){
		for (int j = right; j > left; j--){
			if (a[j - 1] > a[j]){
				swap(int, a[j - 1], a[j]);
				last = j;
			}
		}
		left = last;

		for (int j = left; j < right; j++){
			if (a[j] > a[j + 1]){
				swap(int, a[j], a[j + 1]);
				last = j;
			}
		}
		right = last;
	}
}

int main(void)
{
	int nx;

	puts("双方向バブルソート");
	printf("要素数 : ");
	scanf("%d", &nx);
	int *x = calloc(nx, sizeof(int));	// 要素数nxのint型配列xを生成

	for (int i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	shaker(x, nx);						// 配列xを双方向バブルソート

	puts("昇順にソートしました。");
	for (int i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x);							// 配列xを破棄

	return 0;
}
