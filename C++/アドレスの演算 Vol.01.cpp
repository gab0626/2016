//�A�h���X�Ōv�Z����ɂ͂ǂ�ȈӖ�������̂�

//�z��̂���v�f�̃A�h���X&n[i]��&n[j]�̈����Z�����邱�Ƃ�i-j��������B

//�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�����E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n[5];
//
//	cout << "n[2]     = " << (size_t)&n[2]       << endl;
//	cout << "n[2] + 1 = " << (size_t)(&n[2] + 1) << endl;
//	cout << "n[3]     = " << (size_t)&n[3]       << endl;
//}
//�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�����E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E//

//���s����
//n[2]     = 16514556
//n[2] + 1 = 16514560
//n[3]     = 16514560

//�z��̂���v�f�̃A�h���X &n[i]�ɒlj�𑫂��ƁA���̐�������̔z��ɐi��
//&n[i + j]�ɂȂ�Ƃ������Ƃ��킩��B
//�����Z�̏ꍇ��������&n[i - j]�ɂȂ�B


//�|�C���^��p�������@
//�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�����E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n[4];
//	int* p = n;
//
//	cout << "p     = " << (size_t)p     << endl;
//	cout << "&n[0] = " << (size_t)&n[0] << endl;
//
//	p += 2;
//	cout << "p     = " << (size_t)p     << endl;
//	cout << "&n[2] = " << (size_t)&n[2] << endl;
//}
//�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�����E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E�E//

//���s����
//p     = 8714176
//&n[0] = 8714176

//p��2�𑫂�������
//p     = 8714184
//&n[2] = 8714184

//�܂�int�^�̃|�C���^�ł���p��n[0]�̒l�����ď��������Ă���B
//�����Ă���p��2�𑫂��Ă������n[0]���������g��n[2]�ɂȂ��Ă��邱�Ƃ��킩��B
//���̂悤�ɃA�h���X�̑��Z������Z�Ȃǂ͉\�ł��邱�Ƃ��킩��B
//�|���Z�⊄��Z�͂�قǂ̂��Ƃ��������Ƃ��Ă����K�v���͂Ȃ��B
//���̂��߁A��]�Z�͂ł��Ȃ��悤�ɂȂ��Ă���B
//�ǂ����Ă���肽���ꍇ��int�^�ɃL���X�g����Ƃł���B