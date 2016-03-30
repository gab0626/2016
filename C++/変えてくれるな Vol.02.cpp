//文法的なまとめ

//constの書式は const　型　変数名　=　初期値;
//ポインタ自信を定数にする場合は 型* const　変数名　= 初期値;

//constをつけて参照先やポインタがさしている先の初期値を変えないようにする。
//これはよく使われるが他にもループの回す回数などにも使われたりする。

//constの付ける場所は基本的にどこでも可能。
//const int ARRAY_SIZE = 256
//上記のようにすると配列の要素を決めて変動できなくすることが可能です。
//int array[ARRAY_SIZE]
//と要素数の中身に書き込むだけで定数として扱えます。

//上記で記述している通り、ポインタの場合は
//char* const p = &a;
//とすることによりp自身を定数とすることができる。

//参照先を定数としたいときは
//const char* p;
//とすることで参照先を定数とすることができる。

//どっちも定数にしたいときは
//const char* const p
//みたいに両方にconstをつければいい。


//・・・・・・・・・・・・・・処理・・・・・・・・・・・・・・//
//#include <iostream>
//using namespace std;
//
//const int ARRAY_SIZE = 5;
//
//void Init(int array[])
//{
//	for (int i = 0; i < ARRAY_SIZE; ++i)
//	{
//		array[i] = i * 5;
//	}
//}
//
//void show(const int array[])
//{
//	for (int i = 0; i < ARRAY_SIZE; ++i)
//	{
//		cout << array[i] << ' ';
//	}
//	cout << endl;
//}
//
//int main()
//{
//	int n[ARRAY_SIZE];
//
//	Init(n);
//	show(n);
//}
//・・・・・・・・・・・・・・処理・・・・・・・・・・・・・・//


//実行結果
//0 5 10 15 20

//showの引数にconstをつけることにより、うっかりarray[i]に値を入れようとしても大丈夫になるのと同時に
//showに配列を渡してもその配列が書き換えられることがないということが分かりやすくもなっている。

//またshowの中でInit(array);を呼ぼうとしても,Initの引数にはconstが付いていないため呼び出すことができない。
//上記でconst int ARRAY_SIZE = 5;としているようにループの回る回数などにも活用しているため
//回数を増やしたい場合など変更があったらこの一か所だけを直せばそれで済む。
