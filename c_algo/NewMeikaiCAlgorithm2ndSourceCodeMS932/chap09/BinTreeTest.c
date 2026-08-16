// ２分探索木の利用例

#include <stdio.h>
#include "Member.h"
#include "BinTree.h"

/*--- メニュー ---*/
typedef enum {
	TERMINATE, ADD, REMOVE, SEARCH, PRINT
} Menu;

/*--- メニュー選択 ---*/
Menu SelectMenu(void)
{
	int ch;

	do {
		printf("\n(1)挿入 (2)削除 (3)探索 (4)表示 (0)終了：");
		scanf("%d", &ch);
	} while (ch < TERMINATE || ch > PRINT);
	return (Menu)ch;
}

/*--- メイン関数 ---*/
int main(void)
{
	Menu    menu;
	BinNode *root = NULL;		// ２分探索木の根へのポインタ

	do {
		Member x;
		BinNode *temp;

		switch (menu = SelectMenu()) {
		 /*--- ノードの挿入 ---*/
		 case ADD :
				x = ScanMember("挿入", MEMBER_NO | MEMBER_NAME);
				root = Add(root, &x);
				break;

		 /*--- ノードの削除 ---*/
		 case REMOVE :
				x = ScanMember("削除", MEMBER_NO);
				Remove(&root, &x);
				break;

		 /*--- ノードの探索 ---*/
		 case SEARCH :
				x = ScanMember("探索", MEMBER_NO);
				if ((temp = Search(root, &x)) != NULL)
					PrintLnMember(&temp->data);
				break;

		 /*--- 全ノードの表示 ---*/
		 case PRINT :
				puts("【一覧表】");
				PrintTree(root);
				break;
		}
	} while (menu != TERMINATE);

	FreeTree(root);

	return 0;
}
