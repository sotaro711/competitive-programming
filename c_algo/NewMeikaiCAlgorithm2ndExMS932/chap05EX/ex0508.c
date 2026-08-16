// 演習5-8 ハノイの塔（非再帰）

// 注：本プログラムのコンパイルには"IntStack.h"と"IntStack.c"が必要です。

#include <stdio.h>
#include "IntStack.h"

/*--- 円盤[1]～円盤[no]をx軸からy軸へ移動 ---*/
void move(int no, int x, int y)
{
	int sw = 0;
	IntStack xstk, ystk, sstk;		// スタック

	Initialize(&xstk, 100);
	Initialize(&ystk, 100);
	Initialize(&sstk, 100);

	while (1) {
		if (sw == 0 && no > 1) {
			Push(&xstk, x);				// xの値をプッシュ
			Push(&ystk, y);				// yの値をプッシュ
			Push(&sstk, sw);			// swの値をプッシュ
			no = no - 1;
			y = 6 - x - y;
			continue;
		}

		printf("円盤[%d]を%d軸から%d軸へ移動\n", no, x, y);

		if (sw == 1 && no > 1) {
			Push(&xstk, x);				// xの値をプッシュ
			Push(&ystk, y);				// yの値をプッシュ
			Push(&sstk, sw);			// swの値をプッシュ
			no = no - 1;
			x = 6 - x - y;
			if (++sw == 2) sw = 0;
			continue;
		}
		do {
			if (IsEmpty(&xstk))			// スタックが空になったら
				return;	
			Pop(&xstk, &x);				// 値を保存していたxをポップ
			Pop(&ystk, &y);				// 値を保存していたyをポップ
			Pop(&sstk, &sw);			// 値を保存していたswをポップ
			sw++;
			no++;
		} while (sw == 2);
	}

	Terminate(&xstk);
	Terminate(&ystk);
	Terminate(&sstk);
}

int main(void)
{
	int n;		// 円盤の枚数

	printf("ハノイの塔\n円盤の枚数：");
	scanf("%d", &n);

	move(n, 1, 3);

	return 0;
}
