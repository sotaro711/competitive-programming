// 文字列の表示と読込み

#include <stdio.h>

int main(void)
{
	char st[128];
	printf("文字列：");
	scanf("%s", st);	// stは先頭文字へのポインタであるため&演算子は不要
	printf("%s", st);	// stは先頭文字へのポインタであるため&演算子は不要

	return 0;
}
