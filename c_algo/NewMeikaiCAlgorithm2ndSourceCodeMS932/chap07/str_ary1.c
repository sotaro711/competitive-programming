// 文字列を配列に格納して表示（代入）

#include <stdio.h>

int main(void)
{
	char st[8];

	st[0] = 'A';
	st[1] = 'B';
	st[2] = 'C';
	st[3] = 'D';
	st[4] = '\0';

	printf("文字列stには\"%s\"が格納されています。\n", st);

	return 0;
}
