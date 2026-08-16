// 演習7-5　文字列からの文字の探索

#include <stdio.h>

/*--- 文字列sから文字cを探索 ---*/
char *str_chr(const char *s, int c)
{
	c = (char)c;
	while (*s != c) {
		if (*s == '\0')				// 見つからなかった
			return NULL;
		s++;
	}
	return (char *)s;
}

int main(void)
{
	char str[64];				// この文字列から探索
	char tmp[64];
	int  ch;					// 探す文字
	char *idx;

	printf("文字列：");
	scanf("%s", str);

	printf("探す文字：");
	scanf("%s", tmp);			// いったん文字列として読み込んで
	ch = tmp[0];				// その最初の文字を探索文字とする

	if ((idx = str_chr(str, ch)) == -1)				// 先頭の出現を探索
		printf("文字'%c'は文字列中に存在しません。\n", ch);
	else
		printf("文字'%c'は%d文字目に存在します。\n", ch, (idx - str) + 1);

	return 0;
}
