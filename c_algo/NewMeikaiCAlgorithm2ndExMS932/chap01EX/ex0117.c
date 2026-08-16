// 演習1-17　記号文字を並べてピラミッドを表示

#include <stdio.h>

/*--- 記号文字を並べてピラミッドを表示 ---*/
void spira(int n)
{
	for (int i = 1; i <= n; i++) {				// i行（i = 1, 2, … ,n）
		for (int j = 1; j <= n-i; j++)			// n-i個の' 'を表示
			putchar(' ');
		for (int j = 1; j <= (i-1)*2+1; j++)	// (i-1)*2+1個の'*'を表示
			putchar('*');
		putchar('\n');
	}
}

int main(void)
{
	int n;

	puts("ピラミッドを表示します。");
	do {
		printf("段数は：");
		scanf("%d", &n);
	} while (n <= 0);

	spira(n);

	return 0;
}
