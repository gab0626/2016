// program C++ Training Date 03/29

//�|�C���^ �e�L�X�gP159

//�|�C���^�̓A�h���X���i�[���邽�߂̕ϐ�
//����^�̃A�h���X���i�[����|�C���^�͌^*�ϐ���;�Ƃ����`�Ő錾����B

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



//�|�C���^2 �e�L�X�gP161

//�|�C���^�̎g�����͎w������̃A�h���X�ɂ��郁�����������邱�ƁB

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