//�z��ϐ��������Ɏ�邽�߂ɂ�

//�z��ϐ��̓�������ɘA�����đ��݂��Ă���
//�z��ϐ��������ɂƂ�Ƃ��́A�z��ϐ��̐擪�v�f�̃A�h���X��n���A�|�C���^�Ŏ󂯂�
//�|�C���^���z��ϐ��Ɠ�����[]�Ŋe�v�f���Q�Ƃł���B
//
//#include <iostream>
//
//void Init(int array[])//void Init(int* array)�Ə����Ă��ꏏ
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

//�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E

//�z�񂪂ǂ̂悤�ɂ��ĂȂ��Ă��邩�����ۂɊm���߂Ă݂�B

//�z��ϐ��̓�������Ɋm���ɘA�����đ��݂��Ă���B
//�z��ϐ����͊m���ɔz��̐擪�v�f�̃A�h���X���������Ƃ��ł���B
//�|�C���^���g���΁A�m���ɔz��ϐ����󂯓n�����Ƃ��ł���B

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

//�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E

//���x�͔z����֐��ɓn�������̂Ɣ�ׂ�

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