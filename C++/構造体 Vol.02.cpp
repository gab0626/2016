//�O�͂ŏЉ���\���̂����ۂɎg���Ă݂�

//�I�u�W�F�N�g�̏������q��{}�ň͂�
//�\���͎̂�ɎQ�Ɠn������B

//�E�E�E�E�E�E�E�E�E�E�E�E�E�E�����E�E�E�E�E�E�E�E�E�E�E�E�E�E//
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
	cout << "���O�@: " << student.name << endl;
	cout << "����@: " << student.scoreJapanese << "�@�_" << endl;
	cout << "���w�@: " << student.scoreMath << "�@�_" << endl;
	cout << "�p��@: " << student.scoreEnglish << "�@�_" << endl;
}

int main()
{
	Student student[] =
	{
		{"��",73,98,68},
		{"��",56,88,62},
		{"��",100,98,90},
	};

	int size = sizeof student / sizeof *student;

	for (int i = 0; i < size; ++i)
	{
		show(student[i]);
	}
}
//�E�E�E�E�E�E�E�E�E�E�E�E�E�E�����E�E�E�E�E�E�E�E�E�E�E�E�E�E//

//�܂��͍\���̂̒�`������B��`�����Ȃ̂ł܂��������̂ǂ��ɂ����݂��Ă��Ȃ��B
//���̂����Ă���̂�main�֐��̒���
//Student student[]
//{
//	"��"//�E�E�E
//	"��"//�E�E�E
//	"��"//�E�E�E
//};
//�̂��̕����ł���B
//�����ł�Student�^�̔z��ϐ�student������Ă���B
//���̐錾���͕̂��ʂ̔z��ϐ��̐錾�Ƃ܂������ς��܂���B
//�����ł͐錾�Ɠ����ɏ��������Ă��܂��B
//�\���̂̔z�������������Ƃ��́A���̃I�u�W�F�N�g�ɑ΂��Ă̏������l�������A�ˁA���ꂼ���{}�ň͂ށB
//�����鑽�����z��Ɠ����悤�Ȍ`�ł��B
//�����āAStudent�ւ̎Q�Ƃ������Ɏ��֐�show�ɂ킽���Ă���B
//�\���̂̓f�[�^�ʂ������ꍇ�����X����̂ł��̂悤�ɎQ�Ɠn���i�������̓|�C���^�n���j������̂��ӂ��B
//�z��̎��Ɠ��������ɂȂ�܂��B
//�z��ƈႤ�_�͂�����Q�Ƃ�|�C���^�ɂ��Ă��Ȃ���΍\���̂��R�s�[����Ă���_
//int�^�Ȃǂ̈����Ɠ����悤�ɒl�n���ɂȂ�킯�B
//�����A�\���̂̃T�C�Y��4,000�o�C�g���낤�Ƃ��ۂ��ƃR�s�[����܂��B
//�l�����Ȃ����͒l�n�������ق����L���ȓ_�����邯�ǁA����̓P�[�X�o�C�P�[�X�B

