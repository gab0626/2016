//���@�I�Ȃ܂Ƃ�

//const�̏����� const�@�^�@�ϐ����@=�@�����l;
//�|�C���^���M��萔�ɂ���ꍇ�� �^* const�@�ϐ����@= �����l;

//const�����ĎQ�Ɛ��|�C���^�������Ă����̏����l��ς��Ȃ��悤�ɂ���B
//����͂悭�g���邪���ɂ����[�v�̉񂷉񐔂Ȃǂɂ��g��ꂽ�肷��B

//const�̕t����ꏊ�͊�{�I�ɂǂ��ł��\�B
//const int ARRAY_SIZE = 256
//��L�̂悤�ɂ���Ɣz��̗v�f�����߂ĕϓ��ł��Ȃ����邱�Ƃ��\�ł��B
//int array[ARRAY_SIZE]
//�Ɨv�f���̒��g�ɏ������ނ����Œ萔�Ƃ��Ĉ����܂��B

//��L�ŋL�q���Ă���ʂ�A�|�C���^�̏ꍇ��
//char* const p = &a;
//�Ƃ��邱�Ƃɂ��p���g��萔�Ƃ��邱�Ƃ��ł���B

//�Q�Ɛ��萔�Ƃ������Ƃ���
//const char* p;
//�Ƃ��邱�ƂŎQ�Ɛ��萔�Ƃ��邱�Ƃ��ł���B

//�ǂ������萔�ɂ������Ƃ���
//const char* const p
//�݂����ɗ�����const������΂����B


//�E�E�E�E�E�E�E�E�E�E�E�E�E�E�����E�E�E�E�E�E�E�E�E�E�E�E�E�E//
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
//�E�E�E�E�E�E�E�E�E�E�E�E�E�E�����E�E�E�E�E�E�E�E�E�E�E�E�E�E//


//���s����
//0 5 10 15 20

//show�̈�����const�����邱�Ƃɂ��A��������array[i]�ɒl�����悤�Ƃ��Ă����v�ɂȂ�̂Ɠ�����
//show�ɔz���n���Ă����̔z�񂪏����������邱�Ƃ��Ȃ��Ƃ������Ƃ�������₷�����Ȃ��Ă���B

//�܂�show�̒���Init(array);���Ăڂ��Ƃ��Ă�,Init�̈����ɂ�const���t���Ă��Ȃ����ߌĂяo�����Ƃ��ł��Ȃ��B
//��L��const int ARRAY_SIZE = 5;�Ƃ��Ă���悤�Ƀ��[�v�̉��񐔂Ȃǂɂ����p���Ă��邽��
//�񐔂𑝂₵�����ꍇ�ȂǕύX���������炱�̈ꂩ�������𒼂��΂���ōςށB
