// 演習7-2　ポインタ値を交換する

#include <stdio.h>

/*--- type型のxとyの値を交換 ---*/
#define swap(type, x, y)  do { type t = x; x = y; y = t; } while (0)

int main(void)
{
	char *s1 = "ABCD";		// s1は"ABCD"の先頭文字'A'を指す
	char *s2 = "EFGH";		// s2は"EFGH"の先頭文字'E'を指す

	printf("ポインタs1は\"%s\"を指しています。\n", s1);
	printf("ポインタs2は\"%s\"を指しています。\n", s2);

	swap(char*, s1, s2);

	puts("\nポインタs1とs2の値を交換しました。\n");

	printf("ポインタs1は\"%s\"を指しています。\n", s1);
	printf("ポインタs2は\"%s\"を指しています。\n", s2);

	return 0;
}
