// 演習7-10　力まかせ法による文字列探索（末尾側を探索）

#include <stdio.h>
#include <string.h>

/*--- 力まかせ法による文字列探索（末尾側を探索）---*/
int bf_matchr(const char txt[], const char pat[])
{
	int txt_len = strlen(txt);		// txtの文字数
	int pat_len = strlen(pat);		// patの文字数
	int pt = txt_len - pat_len;		// txtをなぞるカーソル
	int pp;							// patをなぞるカーソル

	
	while (pt >= 0) {
		pp = 0;
		while (txt[pt] == pat[pp]) {
			if (pp == pat_len - 1)
				return pt - pp;
			pp++;
			pt++;
		}
		pt = pt - pp - 1;
	}

	return -1;
}

int main(void)
{
	char s1[256];		// テキスト
	char s2[256];		// パターン

	puts("力まかせ法（末尾側を探索）");

	printf("テキスト：");
	scanf("%s", s1);

	printf("パターン：");
	scanf("%s", s2);

	int idx = bf_matchr(s1, s2);	// 文字列s1から文字列s2を力まかせ法で末尾側から探索

	if (idx == -1)
		puts("テキスト中にパターンは存在しません。");
	else
		printf("%d文字目にマッチします。\n", idx + 1);

	return 0;
}
