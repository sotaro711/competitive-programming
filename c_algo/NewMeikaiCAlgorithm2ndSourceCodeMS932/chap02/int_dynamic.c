// int型のオブジェクトを動的に生成して破棄

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* x = calloc(1, sizeof(int));	// int型オブジェクトを生成

	if (x == NULL)
		puts("記憶域の確保に失敗しました。");
	else {
		*x = 57;
		printf("*x = %d\n", *x);
		free(x);						// int型オブジェクトを破棄
	}

	return 0;
}
