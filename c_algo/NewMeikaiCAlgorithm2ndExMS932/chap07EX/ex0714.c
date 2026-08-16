// 演習7-14　strstr関数と同等な関数（ただし一致した最も末尾文字へのポインタを返却）

#include <stdio.h>
#include <string.h>

/*--- strstr関数と同等な関数（ただし一致した最も末尾文字へのポインタを返却） ---*/
char *str_rstr(const char *s1, const char *s2)
{
	int s1_len = strlen(s1);		// txtの文字数
	int s2_len = strlen(s2);		// patの文字数
	int pt = s1_len - s2_len;		// txtをなぞるカーソル
	int pp;							// patをなぞるカーソル

	while (pt >= 0) {
		pp = 0;
		while (s1[pt] == s2[pp]) {
			if (pp == s2_len - 1)
				return &s1[pt - pp];
			pp++;
			pt++;
		}
		pt = pt - pp - 1;
	}

	return NULL;
}

int main(void)
{
	char s1[256], s2[256];

	puts("strstr関数");

	printf("テキスト：");
	scanf("%s", s1);

	printf("パターン：");
	scanf("%s", s2);

	char *p = str_rstr(s1, s2);		// 文字列s1から文字列s2を末尾から探索

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