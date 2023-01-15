#include <stdio.h>

/*
コメント

データ型:
int(整数)
float(実数)
char(文字)

演算子：
+ - * / %

単項演算子：
++ --

条件分岐(if):
>= <= > < == !=

条件分岐(switch):


ループ(for):
	continue:
	break


関数：複数の処理
	返り値の型 関数名(引数, ...) {
		処理;
		return 返り値;
	}
	返り値、引数がない場合はvoid
	int main関数が最初に実行される
	プロトタイプ宣言をすることで、ファイル内にある関数を順序に関係なく記述できる

三項演算子
	返り値 = (条件)? A : B

変数のスコープ

変数の有効期限
	自動変数
	静的変数(static): 関数の呼び出しごとに更新されない(!?)

配列:
	宣言と初期化
	int sales[3];
	int sales2[] = {200, 400, 300};

文字列：charの配列(終端は\0)
	char s[] = {'a', 'b', 'c', '\0'};
	char s[] = "abc";

ポインタ: アドレスを格納するための変数
	宣言と初期化
	int *pa;
	pa = &a;

	&: アドレス演算子
	*: 関節演算子
		ポインタ型変数が持つアドレスが示すの値を取得する

	値渡し
	参照渡し


*/

void swap(int *pa, int *pb) {
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main(void) {
	int a = 5;
	int b = 10;
	swap(&a, &b);
	printf("a: %d, b: %d", a, b);
	return 0; 
}

