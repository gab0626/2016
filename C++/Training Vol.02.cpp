//配列変数を引数に取るためには

//配列変数はメモリ上に連続して存在している
//配列変数を引数にとるときは、配列変数の先頭要素のアドレスを渡し、ポインタで受ける
//ポインタも配列変数と同じく[]で各要素を参照できる。
//
//#include <iostream>
//
//void Init(int array[])//void Init(int* array)と書いても一緒
//{
//	for (int i = 0; i < 5; ++i)
//	{
//		array[i] = i * 5;
//	}
//}
//
//void Show(int array[])
//{
//	for (int i = 0; i < 5; ++i)
//	{
//		std::cout << array[i] << ' ';
//	}
//	std::cout << std::endl;
//}
//
//int main()
//{
//	int n[5];
//	Init(n);
//	Show(n);
//}

//・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・

//配列がどのようにしてなっているかを実際に確かめてみる。

//配列変数はメモリ上に確かに連続して存在している。
//配列変数名は確かに配列の先頭要素のアドレスをさすことができる。
//ポインタを使えば、確かに配列変数を受け渡すことができる。

//#include <iostream>
//
//int main()
//{
//	char array[10];
//
//	std::cout << "array		: " << (size_t)array << std::endl;
//	for (int i = 0; i < 10; ++i)
//	{
//		std::cout << "&array[" << i << "] : " << (size_t)&array[i] << std::endl;
//	}
//}

//・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・

//今度は配列を関数に渡したものと比べる

#include <iostream>

void showAddresses(char* pointer)
{
	std::cout << "pointer   : " << (size_t)pointer << std::endl;

	for (int i = 0; i < 10; ++i)
	{
		std::cout << "&pointer[" << i << "] : " << (size_t)&pointer[i] << std::endl;
	}
}

int main()
{
	char array[10];

	std::cout << "array		: " << (size_t)array << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		std::cout << "&array[" << i << "] : " << (size_t)&array[i] << std::endl;
	}

	std::cout << std::endl;

	showAddresses(array);
}