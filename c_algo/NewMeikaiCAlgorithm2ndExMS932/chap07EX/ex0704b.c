// 演習7-4　文字列の長さを求める（その２）

#include <stdio.h>

/*--- 文字列sの長さを求める（その２）---*/
size_t str_len(const char *s)
{
	size_t len = 0;

	while (*s++)
		len++;
	return len;
}

int main(void)
{
	char str[256];

	printf("文字列：");
	scanf("%s", str);

	printf("その文字列は%d文字です。\n", str_len(str));

	return 0;
}
