#include<stdio.h>
// すでに定義されている型に新しい名前を付けて定義することができる
// // struct _preson型を_person_tという型名で定義
// typedef struct _person _person_t;

// //_person_t型の変数を宣言できる  
// _person_t p;

// // 構造体の中のメンバを参照する時はドット演算子で

// // ポインタとは
// // アドレスを参照する
// // プログラムからメモリを自在にアクセス
// // 
// int *p;

int main(void) {
    int a, b;
    int *p, *q;

    printf("&a = %10p, &b = %10p\n", &a, &b);
    printf("&p = %10p, &q = %10p\n", &p, &q);
}