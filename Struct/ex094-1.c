#include<stdio.h>

struct day
{
	int nen;
	int tuki;
	int hi;
};

struct profile
{
	char name[20];
	struct day birth;
	char blood[5];
};

main()
{
	struct profile student[5] =
	{
		{"�A�[�T�["			, { 2000, 1, 1 }	,"A" },
		{ "���V�t�@�["		, { 2000, 2, 2 }	, "B" },
		{ "�N�V�i�_"		, { 2000, 1, 3 }	, "O" },
		{ "�l�I"			, { 2000, 1, 4 }	, "AB" },
		{ "�}�T���l"		, { 2000, 2, 5 }	, "A" },
	};
	struct profile* p;
	int i;

	//���ɐ擪�A�h���X������
	p = &student[0];

	//2�����܂�̃f�[�^�݂̂�\������
	for (i = 0; i < 5; i++)
	{
		if (p->birth.tuki == 2)//�@�Q�����܂ꂩ�H
		{
			printf("%s�[�[", p->name);
			printf("%d�N%02d��%02d�����܂�@"
				, p->birth.nen
				, p->birth.tuki
				, p->birth.hi);
			printf("���t�^�[%s�^\n", p->blood);
		}
		p++;//���̃f�[�^��
	}
}
