//�N���X�̑O�g�Ƃ������ׂ��\���́B
//�����ȕϐ����܂Ƃ߂Ďg�����Ƃ��ł���֗��ȑ㕨�B

//�\���̂̐錾�̏����́Astruct �^�O��{�ϐ��錾�Q};
//�\���̂��g���Ί֘A�̂���ϐ����ЂƂ܂Ƃ߂Ɉ�����B
//�\���̂̐錾�͌^�̐錾�ł���B
//�\���̂̊e�v�f�̓����o�Ƃ���
//��������ɂ���ϐ������́i�C���X�^���X�j�ƁA�\���̕ϐ��̂��Ƃ��I�u�W�F�N�g�Ƃ������B
//�����o���g���Ƃ��̓I�u�W�F�N�g.�����o�Ƃ���B

//���܂łł͗Ⴆ�΃N���X���������Ĉ����Ƃ���
//���ꂼ���ʁX�ŗp�ӂ��Ďg���Ă����B
//�E�E�E�E�E�E�E�E�E�E�E�E�E�E��E�E�E�E�E�E�E�E�E�E�E�E�E�E//
//const int NUM_STUDENTS = 40;
//const int MAX_NAME = 16;
//char name[NUM_STUDENTS][MAX_NAME + 1];
//int scoreJapanese[NUM_STUDENTS];
//int scoreMath[NUM_STUDENTS];
//int scoreEnglish[NUM_STUDENTS];
//�E�E�E�E�E�E�E�E�E�E�E�E�E�E��E�E�E�E�E�E�E�E�E�E�E�E�E�E//

//�Ƃ��̂悤�Ƀ��[�J���ϐ��ƂȂ�A�������Ƃ��\����
//�΂�΂�Ɉ������ƂɂȂ�Ɩʓ|�ɂȂ�B
//�l���т����ƂȂ�ƈȉ��̂悤�Ȃ��̂����ꂼ���邱�ƂɂȂ�B
//�E�E�E�E�E�E�E�E�E�E�E�E�E�E��E�E�E�E�E�E�E�E�E�E�E�E�E�E//
//int sum(const int* scoreJapanese, const int* scoreMath, const int* scoreEnglish, int i)
//{
//	return scoreJapanese[i] + scoreMath[i] + scoreEnglish[i];
//}
//�E�E�E�E�E�E�E�E�E�E�E�E�E�E��E�E�E�E�E�E�E�E�E�E�E�E�E�E//

//���̂悤�Ɉ�����������Α�����قǂɖc��ŏ�����ǐ��̖����R�[�h�ɂȂ��Ă��܂��B
//���̂悤�Ƀf�[�^�̓��e�ɂ܂Ƃ܂肪����ꍇ�͂܂Ƃ߂Ĉ������ق������ꂢ�ł��傤�B
//�����ō\���̂��o�ꂷ��̂ł��B
//�E�E�E�E�E�E�E�E�E�E�E�E�E�E��E�E�E�E�E�E�E�E�E�E�E�E�E�E//
//struct student
//{
//	char name[MAX_NAME - 1];
//	int scoreJapanese;
//	int scoreEnglish;
//	int scoreMath;
//};
//�E�E�E�E�E�E�E�E�E�E�E�E�E�E��E�E�E�E�E�E�E�E�E�E�E�E�E�E//
//�ƍ\���̂ɂ��邱�Ƃł����̕ϐ����܂Ƃ߂邱�Ƃ��ł��A�V���Ȍ^�Ƃ��Ĉ������Ƃ��ł��܂��B
//�����āA���̐V���Ȍ^�̖��O�̓^�O���A���邢��struct �^�O���ɂȂ�܂��B
//���̂悤�ɂ��č����V�����^�̂��Ƃ��u�\���́v�ƁA�^�O�����u�\���̃^�O�v���邢�́u�\���̖��v�ƌ����܂��B
//�����A���̂܂܂ł̓�������ɂ͂܂��ǂ̃����o�[�����݂��Ă��܂���B
//�܂���student�^�̕ϐ������B
//�������邱�Ƃł��̕ϐ���student�\���̂̏����������ϐ��ɂȂ�B
//�\���̌^�̕ϐ�����邱�Ƃŏ��߂ă�������ɑ��݂��邱�Ƃ��ł���B
//�Ăяo���Ƃ��͍\���̌^�̃I�u�W�F�N�g�i�ϐ��j.�����o�ƌĂяo�����Ƃł��̏�񂪂�����B
