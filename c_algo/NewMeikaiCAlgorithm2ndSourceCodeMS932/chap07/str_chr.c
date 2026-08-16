/* 文字列からの文字の探索 */

#include <stdio.h>

/*--- 文字列sから文字cを探索 ---*/
int str_chr(const char* s, int c)
{
	int i = 0;

	c = (char)c;
	while (s[i] != c) {
		if (s[i] == '\0')		// 探索失敗
			return -1;
		i++;
	}
	return i;					// 探索成功
}

int main(void)
{
	char str[128];				// この文字列から探索
	char tmp[128];
	int  ch;					// 探す文字
	int  idx;

	printf("文字列：");
	scanf("%s", str);

	printf("探す文字：");
	scanf("%s", tmp);			// いったん文字列として読み込んで
	ch = tmp[0];				// その最初の文字を探索文字とする

	if ((idx = str_chr(str, ch)) == -1)				// 先頭の出現を探索
		printf("文字'%c'は文字列中に存在しません。\n", ch);
	else
		printf("文字'%c'は%d文字目に存在します。\n", ch, idx + 1);

	return 0;
}
