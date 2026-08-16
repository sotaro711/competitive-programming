// ハッシュ法；インデックスの位置を計算して、探索だけではなく挿入や削除も効率よく行う方法
// キー値が衝突した際にどうするか
// キー値：ハッシュ値 = 多；1
// チェイン法；同一のハッシュ値を持つ要素を線形リストで管理
// オープンアドレス法；秋パケットが見つかるまで、ハッシュを切り替える

#ifndef __Member
#define __Mwmber
// 意味: このファイルが 2 回 #include されたとき、2 回目は __Member がすでに定義されているので #ifndef 〜 #endif の中身が丸ごとスキップされる → 構造体の二重定義エラーを防げる、という仕組みです。

/*--- 会員データ ---*/
typedef struct {
	int  no;			// 番号
	char name[20];		// 氏名
} Member;

#define MEMBER_NO		1		// 番号を表す定数値
#define MEMBER_NAME		2		// 氏名を表す定数値

/*--- 会員の番号の比較関数 ---*/
int MemberNoCmp(const Member* x, const Member* y);

/*--- 会員の氏名の比較関数 ---*/
int MemberNameCmp(const Member* x, const Member* y);

/*--- 会員データの表示（改行なし）---*/
void PrintMember(const Member* x);

/*--- 会員データの表示（改行あり）---*/
void PrintLnMember(const Member* x);

/*--- 会員データの読込み ---*/
Member ScanMember(const char* message, int sw);

#endif

