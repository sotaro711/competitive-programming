// 演習7-4　文字列の長さを求める（その３）

#include <stdio.h>

/*
　本プログラム（その３）の関数str_lenが返却する値は、ポインタどうしの減算
　s - p の演算結果です。この演算によって生成されるのは、符号付き整数型である
　ptrdiff_t 型です。一方、関数が返却するsize_t 型は符号無し整数型です。両者が
　表現可能な値の範囲は異なるため、不都合が生じる可能性があります。したがって、
　その１やその２のほうが好ましいといえます。
*/

/*--- 文字列sの長さを求める（その３）---*/
size_t str_len(const char *s)
{
	const char *p = s;

	while (*s)
		s++;
	return s - p;
}

int main(void)
{
	char str[256];

	printf("文字列：");
	scanf("%s", str);

	printf("その文字列は%d文字です。\n", str_len(str));

	return 0;
}
