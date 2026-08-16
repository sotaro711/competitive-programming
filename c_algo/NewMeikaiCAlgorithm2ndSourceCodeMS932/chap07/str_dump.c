// 文字列内の文字を16進数と２進数で表示

#include <stdio.h>
#include <limits.h>

/*--- 文字列s内の文字を16進数と２進数で表示 ---*/
void str_dump(const char *s)
{
	for ( ; *s != '\0'; s++) {
		printf("%c  %0*X  ", *s, (CHAR_BIT + 3) / 4, *s);
		for (int i = CHAR_BIT - 1; i >= 0; i--)
			putchar(((*s >> i) & 1U) ? '1' : '0');
		putchar('\n');
	}
}

int main(void)
{
	str_dump("STRING");

	return 0;
}
