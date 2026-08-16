// 演習7-13　strstr関数と同等な関数

#include <stdio.h>
#include <string.h>

/*--- strstr関数と同等な関数 ---*/
char *str_str(const char *s1, const char *s2)
{
	const char *p1 = s1;
	const char *p2 = s2;

	while (*p1 && *p2) {
		if (*p1 == *p2) {
			p1++;
			p2++;
		} else {
			p1 -= p2 - s2 - 1;
			p2 = s2;
		}
	}
	return *p2 ? NULL : (char *)(p1 - (p2 - s2));
}

int main(void)
{
	char s1[256], s2[256];

	puts("str_str関数");

	printf("テキスト：");
	scanf("%s", s1);

	printf("パターン：");
	scanf("%s", s2);

	char *p = str_str(s1, s2);		// 文字列s1から文字列s2を探索

	if (p == NULL)
		printf("テキスト中にパターンは存在しません。\n");
	else {
		int ofs = p - s1;
		printf("\n%s\n",  s1);
		printf("%*s|\n",  ofs, "");
		printf("%*s%s\n", ofs, "", s2);
	}

	return 0;
}