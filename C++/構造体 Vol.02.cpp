//前章で紹介した構造体を実際に使ってみる

//オブジェクトの初期化子は{}で囲む
//構造体は主に参照渡しする。

//・・・・・・・・・・・・・・処理・・・・・・・・・・・・・・//
#include <iostream>
using namespace std;

const int MAX_NAME = 16;

struct Student
{
	char name[MAX_NAME + 1];
	int scoreJapanese;
	int scoreEnglish;
	int scoreMath;
};

void show(const Student& student)
{
	cout << "名前　: " << student.name << endl;
	cout << "国語　: " << student.scoreJapanese << "　点" << endl;
	cout << "数学　: " << student.scoreMath << "　点" << endl;
	cout << "英語　: " << student.scoreEnglish << "　点" << endl;
}

int main()
{
	Student student[] =
	{
		{"あ",73,98,68},
		{"い",56,88,62},
		{"う",100,98,90},
	};

	int size = sizeof student / sizeof *student;

	for (int i = 0; i < size; ++i)
	{
		show(student[i]);
	}
}
//・・・・・・・・・・・・・・処理・・・・・・・・・・・・・・//

//まずは構造体の定義がある。定義だけなのでまだメモリのどこにも存在していない。
//実体させているのはmain関数の中の
//Student student[]
//{
//	"あ"//・・・
//	"い"//・・・
//	"う"//・・・
//};
//のこの部分である。
//ここではStudent型の配列変数studentを作っている。
//その宣言自体は普通の配列変数の宣言とまったく変わりません。
//ここでは宣言と同時に初期化しています。
//構造体の配列を初期化するときは、一つ一つのオブジェクトに対しての初期化値を書き連ね、それぞれを{}で囲む。
//いわゆる多次元配列と同じような形です。
//そして、Studentへの参照を引数に取る関数showにわたしている。
//構造体はデータ量が多い場合が多々あるのでこのように参照渡し（もしくはポインタ渡し）をするのがふつう。
//配列の時と同じ理屈になります。
//配列と違う点はこれを参照やポインタにしていなければ構造体がコピーされている点
//int型などの引数と同じように値渡しになるわけ。
//もし、構造体のサイズが4,000バイトだろうとも丸ごとコピーされます。
//値が少ない時は値渡ししたほうが有利な点もあるけど、それはケースバイケース。

