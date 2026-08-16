// 演習7-1　文字列終端のナル文字以降の要素への文字の代入

#include <stdio.h>

int main(void)
{
	char st[8];

	st[0] = 'A';
	st[1] = 'B';
	st[2] = 'C';
	st[3] = 'D';
	st[4] = '\0';

	// st[5]以降に文字を代入しても文字列には無関係
	st[5] = 'E';
	st[6] = 'F';
	st[7] = 'G';

	// そのため、必ず"ABCD"と表示される
	printf("文字列stには\"%s\"が格納されています。\n", st);

	return 0;
}
