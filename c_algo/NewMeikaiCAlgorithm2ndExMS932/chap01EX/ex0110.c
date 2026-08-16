// 演習1-10　b - aの値を求める（b > aとなるように読み込む）

#include <stdio.h>

int main(void)
{
	int a, b;

	printf("aの値：");
	scanf("%d", &a);

	while (1) {
		printf("bの値：");
		scanf("%d", &b);
		if (b > a) break;
		printf("aより大きな値を入力せよ！\n");
	}

	printf("b - aは%dです。\n", b - a);

	return 0;
}
