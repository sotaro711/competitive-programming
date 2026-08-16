// 演習7-11　KMP法による文字列探索（探索過程の詳細を表示）

#include <stdio.h>
#include <string.h>

/*--- KMP法による文字列探索（探索過程の詳細を表示）---*/
int kmp_match(const char txt[], const char pat[])
{
	int pt = 1;			// txtをなぞるカーソル
	int pp = 0;			// patをなぞるカーソル
	int skip[1024];		// スキップテーブル 
	int k = pt - pp;
	int tlen = strlen(txt);
	int plen = strlen(pat);
	int count = 0;

	printf("スキップテーブル作成\n");
	skip[pt] = 0;
	while (pat[pt] != '\0') {
		if (k == pt - pp)
			printf("    ");
		else {
			printf("%2d  ", pt - pp);
			k = pt - pp;
		} 
		for (int i = 0; i < plen; i++)
			printf("%c ", pat[i]);
		putchar('\n');

		printf("%*s%c\n", pt*2+4, "", (pat[pt] == pat[pp]) ? '+' : '|');

		printf("%*s", (pt-pp)*2+4, "");
		for (int i = 0; i < plen; i++)
			printf("%c ", pat[i]);
		printf("\n\n");
		count++;
		if (pat[pt] == pat[pp])
			skip[++pt] = ++pp;
		else if (pp == 0)
			skip[++pt] = pp;
		else
			pp = skip[pp];
	}

	printf("スキップテーブル\n");
	for (int i = 1; i < plen; i++)
		printf(" %c", pat[i]);
	putchar('\n');

	for (int i = 1; i < plen; i++)
		printf("--");
	printf("-\n");

	for (int i = 1; i < plen; i++)
		printf("%2d", skip[i + 1]);
	printf("\n\n");

	printf("探索\n");
	pt = pp = 0;
	while (txt[pt] != '\0'  &&  pat[pp] != '\0') {
		if (k == pt - pp)
			printf("    ");
		else {
			printf("%2d  ", pt - pp);
			k = pt - pp;
		} 
		for (int i = 0; i < tlen; i++)
			printf("%c ", txt[i]);
		putchar('\n');

		printf("%*s%c\n", pt*2+4, "", (txt[pt] == pat[pp]) ? '+' : '|');

		printf("%*s", (pt-pp)*2+4, "");
		for (int i = 0; i < plen; i++)
			printf("%c ", pat[i]);
		printf("\n\n");
		count++;

		if (txt[pt] == pat[pp]) {
			pt++; pp++;
		} else if (pp == 0)
			pt++;
		else
			pp = skip[pp];
	}

	printf("比較は%d回でした。\n", count);
	if (pat[pp] == '\0')
		return pt - pp;
	return -1;
}

int main(void)
{
	char s1[256];		// テキスト
	char s2[256];		// パターン

	puts("KMP法");

	printf("テキスト：");
	scanf("%s", s1);

	printf("パターン：");
	scanf("%s", s2);

	int idx = kmp_match(s1, s2);	// 文字列s1から文字列s2をKMP法で探索

	if (idx == -1)
		puts("テキスト中にパターンは存在しません。");
	else
		printf("%d文字目にマッチします。\n", idx + 1);

	return 0;
}
