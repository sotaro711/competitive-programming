// 読み込んだ整数値の判定（その１）

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
	else
		puts("Ｃ");

	return 0;
}
