// 演習7-8　大文字・小文字を区別しない文字列の比較

#include <ctype.h>
#include <stdio.h>
#include <string.h>

/*--- 二つの文字列s1とs2を比較（大文字・小文字を区別しない）---*/
int str_cmpic(const char *s1, const char *s2)
{
	while (toupper(*s1) == toupper(*s2)) {
		if (*s1 == '\0')			// 等しい
			return 0;
		s1++;
		s2++;
	}
	return (unsigned char)toupper(*s1) - (unsigned char)toupper(*s2);
}

/*--- 二つの文字の配列s1とs2の先頭n文字を比較（大文字・小文字を区別しない）---*/
int str_ncmpic(const char *s1, const char *s2, size_t n)
{
	while (n && *s1 && *s2) {
		if (toupper(*s1) != toupper(*s2))			// 等しくない
			return (unsigned char)toupper(*s1) - (unsigned char)toupper(*s2);
		s1++;
		s2++;
		n--;
	}
	if (!n)  return 0;
	if (*s1) return toupper(*s1);
	return toupper(*s2);
}

int main(void)
{
	int n, retry;
	char s1[256], s2[256];

	puts("大文字／小文字を区別しない比較");

	do {
		printf("s1：");   scanf("%s", s1);
		printf("s2：");   scanf("%s", s2);
		printf("比較文字数：");   scanf("%d", &n);

		printf("str_cmpic( \"%s\", \"%s\")    = %d\n", s1, s2, str_cmpic(s1, s2));
		printf("str_ncmpic(\"%s\", \"%s\", %d) = %d\n", s1, s2, n, str_ncmpic(s1, s2, n));
		printf("もう一度[0…No／1…Yes]：");
		scanf("%d", &retry);
	} while (retry == 1);

	return 0;
}
