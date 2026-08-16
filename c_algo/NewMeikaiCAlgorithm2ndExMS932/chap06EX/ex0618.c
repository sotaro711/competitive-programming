// 演習6-18　汎用クイックソート（qsort関数に準じた仕様）

#include <stdio.h>
#include <stdlib.h>

/*--- x, yの指すnバイトの領域を交換 ---*/
static void memswap(void *x, void *y, size_t n)
{
	unsigned char *a = (unsigned char *)x;
	unsigned char *b = (unsigned char *)y;

	for ( ; n--; a++, b++) {
		unsigned char c = *a;
		*a = *b;
		*b = c;
	}
}

/*--- 汎用クイックソート（qsort関数に準じた仕様）---*/
void q_sort(void *base, size_t nmemb, size_t size,
			int (*compar)(const void *, const void *))
{
	if (nmemb > 0) {
		size_t pl = 0;					// 左カーソル
		size_t pr = nmemb - 1;			// 右カーソル
		size_t pv = nmemb;				// 枢軸
		size_t pt = (pl + pr) / 2;		// 枢軸の更新値
		char *v = (char *)base;			// 先頭要素へのポインタ

		do {
			char *x = &v[(pv = pt) * size];		// 枢軸へのポインタ
			while (compar((const void *)&v[pl * size], x) < 0) pl++;
			while (compar((const void *)&v[pr * size], x) > 0) pr--;
			if (pl <= pr) {
				pt = (pl == pv) ? pr : (pr == pv) ? pl : pv;
				memswap(&v[pl * size], &v[pr * size], size);
				pl++;
				if (pr == 0)	// 符号無し整数0からのデクリメントを避ける
					goto QuickRight;
				pr--;
			}
		} while (pl <= pr);

		if (0  < pr)      q_sort(&v[0],         pr + 1,     size, compar);
	QuickRight:
		if (pl < nmemb-1) q_sort(&v[pl * size], nmemb - pl, size, compar);
	}
}

/*--- int型の比較関数（昇順ソート用） ---*/
int int_cmp(const int *a, const int *b)
{
	return *a < *b ? -1 : *a > *b ? 1 : 0;
}

int main(void)
{
	int nx;

	printf("q_sortによるソート\n");
	printf("要素数 : ");
	scanf("%d", &nx);
	int *x = calloc(nx, sizeof(int));	// 要素数nxのint型配列xを生成

	for (int i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	q_sort(x,											// 配列
		   nx,											// 要素数
		   sizeof(int),									// 要素の大きさ
		   (int (*)(const void *, const void *))int_cmp	// 比較関数
		  );

	puts("昇順にソートしました。");
	for (int i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x);							// 配列xを破棄

	return 0;
}
