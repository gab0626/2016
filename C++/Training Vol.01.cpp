// program C++ Training Date 03/29

//ポインタ テキストP159

//ポインタはアドレスを格納するための変数
//ある型のアドレスを格納するポインタは型*変数名;という形で宣言する。

//#include <iostream>
//
//int main()
//{
//	char a;
//	char* p;
//
//	p = &a;
//	std::cout << "p = " << (size_t)p << std::endl;
//	std::cout << "&a =" << (size_t)&a << std::endl;
//}



//ポインタ2 テキストP161

//ポインタの使い道は指した先のアドレスにあるメモリを扱えること。

#include <iostream>

int main()
{
	int a;
	int* p = &a;

	a = 0;
	std::cout << "a = " << a << std::endl;
	std::cout << "*p =" << p << std::endl;

	*p = 5;
	std::cout << "a = " << a << std::endl;
	std::cout << "*p = " << p << std::endl;
}