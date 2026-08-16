// ヒープソート

#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y)  do { type t = x; x = y; y = t; } while (0)

/*--- a[left]～a[right]をヒープ化 ---*/
static void downheap(int a[], int left, int right)
{
	int temp = a[left];				// 根
	int child;
	int parent;

	for (parent = left; parent < (right + 1) / 2; parent = child) {
		int cl = parent * 2 + 1;	// 左の子
		int cr = cl + 1;			// 右の子
		child = (cr <= right && a[cr] > a[cl]) ? cr : cl;	// 大きいほうの子
		if (temp >= a[child])
			break;
		a[parent] = a[child];
	}
	a[parent] = temp;
}

/*--- ヒープソート ---*/
void heapsort(int a[], int n)
{
	for (int i = (n - 1) / 2; i >= 0; i--)
		downheap(a, i, n - 1);

	for (int i = n - 1; i > 0; i--) {
		swap(int, a[0], a[i]);
		downheap(a, 0, i - 1);
	}
}

int main(void)
{
	int nx;

	puts("ヒープソート");
	printf("要素数 : ");
	scanf("%d", &nx);
	int* x = calloc(nx, sizeof(int));	// 要素数nxのint型配列xを生成

	for (int i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	heapsort(x, nx);	// 配列xをヒープソート

	puts("昇順にソートしました。");
	for (int i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x);			// 配列xを破棄

	return 0;
}
