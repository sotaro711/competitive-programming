// 読み込んだ整数値の判定（その２）

#include <stdio.h>

int main(void)
{
	int n;

	printf("整数：");
	scanf("%d", &n);

	if (n == 1)
		puts("Ａ");
	else if (n == 2)
		puts("Ｂ");
	else if (n == 3)
		puts("Ｃ");

	return 0;
}
