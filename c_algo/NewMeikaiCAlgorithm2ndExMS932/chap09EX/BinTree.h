// 演習9-1～演習9-2　２分探索木（ヘッダ部）

#ifndef ___BinTree
#define ___BinTree

#include "Member.h"

/*--- ノード ---*/
typedef struct __bnode {
	Member         data;		// データ
	struct __bnode *left;		// 左ポインタ（左子ノードへのポインタ）
	struct __bnode *right;		// 右ポインタ（右子ノードへのポインタ）
} BinNode;

/*--- 探索 ---*/
BinNode *Search(BinNode *p, const Member *x);

/*--- ノードの挿入 ---*/
BinNode *Add(BinNode *p, const Member *x);

/*--- ノードの削除 ---*/
int Remove(BinNode **root, const Member *x);

/*--- 全ノードの表示 ---*/
void PrintTree(const BinNode *p);

/*--- 全ノードをキー値の降順に表示 ---*/
void PrintTreeReverse(const BinNode *p);

/*--- 最小のキー値をもつノードを取得 ---*/
BinNode *GetMinNode(const BinNode *p);

/*--- 最大のキー値をもつノードを取得 ---*/
BinNode *GetMaxNode(const BinNode *p);

/*--- 全ノードの削除 ---*/
void FreeTree(BinNode *p);

#endif
