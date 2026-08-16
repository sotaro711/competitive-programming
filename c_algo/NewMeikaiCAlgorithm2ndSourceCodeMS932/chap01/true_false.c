// 0が偽で0以外が真であることを確認

#include <stdio.h>

int main(void)
{
	int a;

	printf("aの値：");
	scanf("%d", &a);

	if (a) printf("ABC");

	return 0;
}
