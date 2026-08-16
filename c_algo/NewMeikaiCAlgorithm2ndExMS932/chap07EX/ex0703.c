// 演習7-3　二つの文字列の中身を入れかえる

#include <stdio.h>

/*--- 二つの文字列xとyを交換する ---*/
void swap_str(char *x, char *y)
{
	char *temp;
	while (*x && *y) {	// 短いほうの末尾まで文字列を交換
		char t = *x; *x++ = *y; *y++ = t;
	}
	if (*x) {							// xのほうが長ければ
		temp = x;
		while (*x) { *y++ = *x++; }		// xの残りをyにコピー
		*temp = *y = '\0';
	} else if (*y) {					// yのほうが長ければ
		temp = y;
		while (*y) { *x++ = *y++; }		// yの残りをxにコピー
		*temp = *x = '\0';
	} else {
		*x = *y = '\0';
	}
}

int main(void)
{
	char s1[128], s2[128];

	printf("文字列s1：");	scanf("%s", s1);
	printf("文字列s2：");	scanf("%s", s2);

	swap_str(s1, s2);	// s1とs2を交換

	printf("二つの文字列を交換しました。\n");
	printf("文字列s1：%s\n", s1);
	printf("文字列s2：%s\n", s2);

	return 0;
}
