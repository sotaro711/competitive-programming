// 乱数を生成（その１）

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x = rand();		// 0～RAND_MAXの乱数
	int y = rand();		// 0～RAND_MAXの乱数
	printf("xは%dでyは%dです。\n", x, y);

	return 0;
}
